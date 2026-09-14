class LRUCache {
public:

    class Node {
    public:
        int key;
        int value;
        Node* next;
        Node* prev;

        Node(int key, int value) {
            this->key = key;
            this->value = value;
            next = NULL;
            prev = NULL;
        }
    };

    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);

    int cap;

    unordered_map<int, Node*> mp;

    LRUCache(int capacity) {
        cap = capacity;

        head->next = tail;
        tail->prev = head;
    }

    // Add node just after head
    void addNode(Node* newNode) {

        Node* temp = head->next;

        newNode->next = temp;
        newNode->prev = head;

        head->next = newNode;
        temp->prev = newNode;
    }

    // Delete node
    void deleteNode(Node* delNode) {

        Node* delPrev = delNode->prev;
        Node* delNext = delNode->next;

        delPrev->next = delNext;
        delNext->prev = delPrev;
    }

    int get(int key) {

        if (mp.find(key) == mp.end())
            return -1;

        Node* resNode = mp[key];

        int ans = resNode->value;

        // Remove from current position
        deleteNode(resNode);

        // Add at front = recently used
        addNode(resNode);

        return ans;
    }

    void put(int key, int value) {

        // Key already exists
        if (mp.find(key) != mp.end()) {

            Node* existingNode = mp[key];

            deleteNode(existingNode);

            mp.erase(key);
        }

        // Cache full
        if (mp.size() == cap) {

            Node* lruNode = tail->prev;

            mp.erase(lruNode->key);

            deleteNode(lruNode);

            delete lruNode;
        }

        // Add new node at front
        Node* newNode = new Node(key, value);

        addNode(newNode);

        mp[key] = newNode;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna