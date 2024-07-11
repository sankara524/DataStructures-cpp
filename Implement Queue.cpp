//Implement Queue
#include <iostream>
#include <string>
#include <deque>
using namespace std;
int main() {
    int T;
    cin >> T;
    deque<int> q;
    while (T--) {
        string op;
        cin >> op;
        if (op == "Enqueue") {
            int x;
            cin >> x;
            q.push_back(x);
        } else if (op == "Dequeue") {
            if (q.empty()) {
                cout << "Empty" << endl;
            } else {
                cout << q.front() << endl;
                q.pop_front();
            }
        }
    }
    return 0;
}
