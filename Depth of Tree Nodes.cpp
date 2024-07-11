//Depth of Tree Nodes
#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Tree {
    public:
    Node *root = NULL;
    unordered_map<int, int> depthMap;

    Node* create_and_insert(Node* root, int val, int depth) {
        if (root == NULL) {
            depthMap[val] = depth;
            return new Node(val);
        } else if (val < root->data) {
            root->left = create_and_insert(root->left, val, depth + 1);
        } else {
            root->right = create_and_insert(root->right, val, depth + 1);
        }
        return root;
    }

    void insert(int val) {
        root = create_and_insert(root, val, 0);
    }
};

int main() {
    int t, n, v;
    cin >> t;
    while (t--) {
        Tree bst;
        cin >> n;
        vector<int> values(n);
        for (int i = 0; i < n; i++) {
            cin >> values[i];
            bst.insert(values[i]);
        }

        for (int i = 0; i < n; i++) {
            cout << bst.depthMap[values[i]] <<" " ;
        }
        cout << endl;
    }
    return 0;
}
