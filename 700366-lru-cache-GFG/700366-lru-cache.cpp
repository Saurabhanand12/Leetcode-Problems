class LRUCache {
public:
    int c;
    stack<pair<int, int>> st;

    LRUCache(int cap) {
        c = cap;
    }

    int get(int key) {
        stack<pair<int, int>> temp;
        int value = -1;
        bool found = false;

        while (!st.empty()) {
            pair<int, int> top = st.top();
            st.pop();

            if (key == top.first) {
                found = true;
                value = top.second;
                break;
            }
            else {
                temp.push(top);
            }
        }

        // Restore remaining elements
        while (!temp.empty()) {
            pair<int, int> top = temp.top();
            temp.pop();
            st.push(top);
        }

        // If found, make it MRU
        if (found) {
            st.push({key, value});
        }

        return value;
    }

    void put(int key, int value) {
        stack<pair<int, int>> temp;
        bool found = false;

        // Remove key if it already exists
        while (!st.empty()) {
            pair<int, int> top = st.top();
            st.pop();

            if (top.first == key) {
                found = true;
            }
            else {
                temp.push(top);
            }
        }

        // Restore remaining elements
        while (!temp.empty()) {
            pair<int, int> top = temp.top();
            temp.pop();
            st.push(top);
        }

        // Key already exists
        if (found) {
            // Updated key becomes MRU
            st.push({key, value});
            return;
        }

        // Key is new
        // If cache is full, remove LRU
        if (st.size() == c) {

            stack<pair<int, int>> temp2;

            // Move everything except bottom element
            while (st.size() > 1) {
                temp2.push(st.top());
                st.pop();
            }

            // Remove bottom = LRU
            st.pop();

            // Restore elements
            while (!temp2.empty()) {
                st.push(temp2.top());
                temp2.pop();
            }
        }

        // Insert new key as MRU
        st.push({key, value});
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna