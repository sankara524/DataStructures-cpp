#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    for(int i=1;i<=t;i++){
        int n, m;
        cin >> n >> m;

        map<pair<int, int>, bool> vis;
        bool done = 1;

        while(m--){
            int x, y;
            cin >> x >> y;

            if (vis[{x, y}]) done = 0;
            vis[{x, y}] = 1;
        }

        if (done == 1) cout << "Scenario #" << i << ": " << "possible" << endl;
        else cout << "Scenario #" << i << ": " << "impossible" << endl;
    }

    return 0;
}
