#include <iostream>
#include <stack>
#include <queue>

template<typename Key, typename Value>
class BST {

private:
    struct Node {
        Key key;
        Value value;
        Node *left;
        Node *right;

        Node(Key key, Value value) {
            this->key = key;
            this->value = value;
            left = NULL;
            right = NULL;
        }
    };

    int count;
    Node* root;

    void destroy(Node *node) {
        if(node != NULL) {
            destroy(node->left);
            destroy(node->right);
            delete node;
        }
    }

    Node* insert(Node *node, Key key, Value value) {
        if(node == NULL) {
            count++;
            return new Node(key, value);
        }

        if(key == node->key)
            node->value = value;
        else if(key < node->key)
            node->left = insert(node->left, key, value);
        else
            node->right = insert(node->right, key, value);

        return node;
    }

    bool contain(Node *node, Key key) {
        if(node == NULL)
            return false;
        if(key == node->key)
            return true;
        else if(key < node->key)
            contain(node->left, key);
        else
            contain(node->right, key);
    }

    Value* search(Node *node, Key key) {
        if(node == NULL)
            return NULL;
        if(key == node->key)
            return &(node->value);
        else if(key < node->key)
            return search(node->left, key);
        else
            return search(node->right, key);
    }

    void preorder(Node *root) {
        if(root != NULL) {
            std::cout << root->key << ": " << root->value << std::endl;
            preorder(root->left);
            preorder(root->right);
        }
    }

    void inorder(Node *root) {
        if(root != NULL) {
            inorder(root->left);
            std::cout << root->key << ": " << root->value << std::endl;
            inorder(root->right);
        }
    }

    void postorder(Node *root) {
        if(root != NULL) {
            postorder(root->left);
            postorder(root->right);
            std::cout << root->key << ": " << root->value << std::endl;
        }
    }

    Node* findMin(Node *root) {
        if(root->left == NULL)
            return root;

        return findMin(root->left);
    }

    Node* findMax(Node *root) {
        if(root->right == NULL)
            return root;
        return findMax(root->right);
    }

    Node* removeMin(Node *root) {
        if(root->left == NULL) {
            Node* rightNode = root->right;
            delete root;
            count--;
            return rightNode;
        }
        root->left = removeMin(root->left);
        return root;
    }

    Node* removeMax(Node *root) {
        if(root->right == NULL) {
            Node* leftNode = root->left;
            delete root;
            count--;
            return leftNode;
        }
        root->right = removeMax(root->right);
        return root;
    }

public:
    BST() {
        root = NULL;
        count = 0;
    }

    int size() {
        return count;
    }

    void insert(Key key, Value value) {
        root = insert(root, key, value);
    }

    bool contain(Key key) {
        return contain(root, key);
    }

    Value* search(Key key) {
        return search(root, key);
    }

    void preorder() {
        preorder(root);
    }

    void inorder() {
        inorder(root);
    }

    void postorder() {
        postorder(root);
    }
    void preorder_stk() {
        if(root == NULL) {
            std::cout << "No Node Found" << std::endl;
            return;
        }
        std::stack<Node *> stk;
        Node *p = root;

        while(p || !stk.empty()) {
            if(p) {
                std::cout << p->key << ": " << p->value << std::endl;
                stk.push(p);
                p = p->left;
            }
            else {
                p = stk.top();
                stk.pop();
                p = p->right;
            }
        }
    }

    void inorder_stk() {
        if(root == NULL) {
            std::cout << "No Node Found" << std::endl;
            return;
        }
        std::stack<Node *> stk;
        Node *p = root;
        while(p || !stk.empty()) {
            if(p) {
                stk.push(p);
                p = p->left;
            }
            else {
                p = stk.top();
                stk.pop();
                std::cout << p->key << ": " << p->value << std::endl;
                p = p->right;
            }
        }
    }

    void postorder_stk() {
        if(root == NULL) {
            std::cout << "No Node Found" << std::endl;
            return;
        }
        std::stack<Node *> stk;
        Node *curNode = root;
        Node *lastNode = NULL;

        while(curNode || !stk.empty()) {
            if(curNode) {
                stk.push(curNode);
                curNode = curNode->left;
            }
            else {
                Node *topNode = stk.top();
                if(topNode->right && lastNode != topNode->right) {
                    curNode = topNode->right;
                }
                else {
                    std::cout << topNode->key << ": " << topNode->value << std::endl;
                    lastNode = topNode;
                    stk.pop();
                }
            }
        }
    }

    void levelorder() {
        std::queue<Node *> q;
        q.push(root);
        while(!q.empty()) {
            Node* node = q.front();
            std::cout << node->key << ": " << node->value << std::endl;
            q.pop();
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
    }

    void findMin() {
        Node* test = findMin(root);
        std::cout << test->key << ": " << test->value << std::endl;
    }

    void findMax() {
        Node* test = findMax(root);
        std::cout << test->key << ": " << test->value << std::endl;
    }

    void removeMin() {
        root = removeMin(root);
    }

    void removeMax() {
        root = removeMax(root);
    }

    
    ~BST() {
        // std::cout << "destroy tree" << std::endl;
        destroy(root);
    }
};
