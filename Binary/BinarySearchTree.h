
template<typename Key, typename Value>
class BinarySearchTree {

private:
    struct Node {
        Key key;
        Value value;
        Node* left;
        Node* right;

        // Node(Key key, Value value) {
        //     this->key = key;
        //     this->value = value;
        //     this->left = NULL;
        //     this->right = NULL;
        // }
        Node(Key key, Value value) : key(key), value(value), left(NULL), right(NULL) {}
    }

    Node* root;
    int count;

    Node* insert(Node *root, Key key, Value value) {
        if(root == NULL) {
            return new Node(key, value);
            count++;
        }

        if(root->key == key)
            root->value = value;
        else if(root->key > key)
            root->left = insert(root, key, value);
        else
            root->right = insert(root, key, value);
    }

public:
    BinarySearchTree() {
        root = NULL;
        count = 0;
    }

    int size() {
        return count;
    }

    bool isEmpty() {
        return count == 0;
    }

    void insert(Key key, Value value) {
        insert(root, key, value);
    }

    ~BinarySearchTree() {
        //TODO
    }
}
