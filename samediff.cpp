#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        unordered_map<int, int> freq;

        long long count_pairs = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            count_pairs += freq[a[i] - i];
            freq[a[i] - i]++;
        }

        cout << count_pairs << endl;
    }

    return 0;
}

