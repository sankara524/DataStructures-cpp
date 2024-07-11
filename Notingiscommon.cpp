#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int minimalNumbersToThrowAway(vector<int>& alice, vector<int>& berta) {
    unordered_set<int> bertaSet(berta.begin(), berta.end());
    int count = 0;
    for (int num : alice) {
        if (bertaSet.find(num) != bertaSet.end()) {
            count++;
        }
    }
    return count;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, M;
        cin >> N >> M;
        
        vector<int> alice(N);
        vector<int> berta(M);
        
        for (int i = 0; i < N; ++i) {
            cin >> alice[i];
        }
        
        for (int i = 0; i < M; ++i) {
            cin >> berta[i];
        }
        
        int minimal = minimalNumbersToThrowAway(alice, berta);
        cout << minimal << endl;
    }
    
    return 0;
}

