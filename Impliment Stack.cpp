//Implement Stack
#include <iostream>
#include <string>
#include <queue>
using namespace std;
int main() {
    int T;
    cin >> T;
    queue<int> q;
    while (T--) {
        string op;
        cin >> op;
        if (op == "push") {
            int x;
            cin >> x;
            q.push(x);
        } else if (op == "pop") {
            if (q.empty()) {
                cout << "Empty" << endl;
            } else {
                int size = q.size();
                for (int i = 0; i < size - 1; i++) {
                    q.push(q.front());
                    q.pop();
                }
                cout << q.front() << endl;
                q.pop();
            }
        }
    }
    return 0;
}
