class LFUCache {
public:
    class Node{
    public:
        int key;
        int value;
        int freq;

        Node* next;
        Node* prev;

        Node(int key,int value){
            this->key = key;
            this->value = value;
            freq = 1;
            next = NULL;
            prev = NULL;
        }
    };

    class List{
    public:
        int size;
        Node* head;
        Node* tail;

        List(){
            size = 0;

            head = new Node(-1,-1);
            tail = new Node(-1,-1);

            head->next = tail;
            tail->prev = head;
        }

        void addFront(Node* node){
            Node* temp = head->next;

            head->next = node;
            node->prev = head;

            node->next = temp;
            temp->prev = node;

            size++;
        }

        void removeNode(Node* node){
            Node* prevNode = node->prev;
            Node* nextNode = node->next;

            prevNode->next = nextNode;
            nextNode->prev = prevNode;

            size--;
        }

        Node* removeLast(){
            if(size == 0) return NULL;

            Node* node = tail->prev;

            removeNode(node);

            return node;
        }
    };

    int capacity;
    int minFreq;

    unordered_map<int,Node*> keyNode;
    unordered_map<int,List*> freqListMap;

    LFUCache(int capacity) {
        this->capacity = capacity;
        minFreq = 0;
    }

    void updateFreq(Node* node){
        int freq = node->freq;

        // Remove from old frequency list
        freqListMap[freq]->removeNode(node);

        // If old list was minimum frequency
        if(freq == minFreq &&
           freqListMap[freq]->size == 0){
            minFreq++;
        }

        // Increase frequency
        node->freq++;

        // Create new frequency list if needed
        if(freqListMap.find(node->freq) ==
           freqListMap.end()){
            freqListMap[node->freq] = new List();
        }

        // Add to front of new frequency list
        freqListMap[node->freq]->addFront(node);
    }

    int get(int key) {
        if(keyNode.find(key) == keyNode.end()){
            return -1;
        }

        Node* node = keyNode[key];

        updateFreq(node);

        return node->value;
    }

    void put(int key, int value) {
        if(capacity == 0) return;

        // If key already exists
        if(keyNode.find(key) != keyNode.end()){
            Node* node = keyNode[key];

            node->value = value;

            updateFreq(node);

            return;
        }

        // If cache is full
        if(keyNode.size() == capacity){
            List* list = freqListMap[minFreq];

            Node* node = list->removeLast();

            keyNode.erase(node->key);

            delete node;
        }

        // Insert new node
        Node* node = new Node(key,value);

        minFreq = 1;

        if(freqListMap.find(1) == freqListMap.end()){
            freqListMap[1] = new List();
        }

        freqListMap[1]->addFront(node);

        keyNode[key] = node;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna