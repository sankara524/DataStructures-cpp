
//bst
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
bool isBSTUtil(const vector<int>& tree, int index, int min, int max) {
    if (index >= tree.size()) {
        return true;
    }

    int value = tree[index];
    if (value <= min || value >= max) {
        return false;
    }
    bool isLeftBST = isBSTUtil(tree, 2 * index, min, value);
    bool isRightBST = isBSTUtil(tree, 2 * index + 1, value, max);

    return isLeftBST && isRightBST;
}

bool isBST(const vector<int>& tree) {
    return isBSTUtil(tree, 1, INT_MIN, INT_MAX);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> tree(N + 1); 
        for (int i = 1; i <= N; i++) {
            cin >> tree[i];
        }
        if (isBST(tree)) {
            cout << "True" << endl;
        } else {
            cout << "False" << endl;
        }
    }
    return 0;
}

