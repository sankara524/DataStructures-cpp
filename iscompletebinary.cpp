//complete
//complete
#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;
    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class Tree {
public:
    Node *root = NULL;

    
    Node* createNodeAndInsert(Node *root, int val) {
        if (root == NULL)
            return new Node(val);
        else if (val < root->data)
            root->left = createNodeAndInsert(root->left, val);
        else if (val > root->data)
            root->right = createNodeAndInsert(root->right, val);
        return root;
    }

    
    void insert(int val) {
        root = createNodeAndInsert(root, val);
    }

   
    bool isCompleteBinaryTree(Node* root) {
        if (root == NULL)
            return true;

        queue<Node*> q;
        q.push(root);
        bool encounteredNull = false;

        while (!q.empty()) {
            Node* node = q.front();
            q.pop();

            if (node == NULL) {
                encounteredNull = true;
            } else {
                if (encounteredNull)
                    return false; 
                q.push(node->left);
                q.push(node->right);
            }
        }

        return true;
    }

    bool isCompleteBinaryTree() {
        return isCompleteBinaryTree(root);
    }
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        Tree bst;
        int n;
        cin >> n;

        while (n--) {
            int d;
            cin >> d;
            bst.insert(d);
        }

        if (bst.isCompleteBinaryTree()) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
