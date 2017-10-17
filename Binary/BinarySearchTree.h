
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
    };

    Node* root;
    int count;

    Node* insert(Node *root, Key key, Value value) {
        if(root == NULL) {
            count++;
            return new Node(key, value);
        }

        if(root->key == key)
            root->value = value;
        else if(root->key > key)
            root->left = insert(root, key, value);
        else
            root->right = insert(root, key, value);

        return root;
    }

    bool contain(Node* root, Key key) {
        if(root == NULL)
            return false;
        if(root->key == key)
            return true;
        else if(root->key > key)
            return contain(root->left, key);
        else
            return contain(root->right, key);
    }

    Value* search(Node *root, Key key) {
        if(root == NULL)
            return NULL;
        if(root->key == key)
            return &(root->value);
        else if(key < root->key)
            return search(root->left, key);
        else
            return search(root->right, key);
    }

    void destroy(Node *root) {
        if(root != NULL) {
            destroy(root->left);
            destroy(root->right);
            delete root;
        }
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

    void insert2(Key key, Value value) {
        if(root == NULL) {
            count++;
            root = new Node(key, value);
            return;
        }
        Node* p = root;
        while(p != NULL) {
            if(p->key == key)
                p->value = value;
            else if(p->key > key)
                p = p->left;
            else
                p = p->right;
        }
        p = new Node(key, value);
        count++;
        return;
    }

    bool contain(Key key) {
        return contain(root, key);
    }

    Value* search(Key key) {
        return search(root, key);
    }

    ~BinarySearchTree() {
        destroy(root);
    }
};
