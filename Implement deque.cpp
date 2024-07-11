//Implement deque
#include <iostream>
#include <string>
#include <deque>
using namespace std;
int main() {
    int T;
    cin >> T;
    deque<int> dq;
    while (T--) {
        string operation;
        cin >> operation;
        if (operation == "push_front") {
            int x;
            cin >> x;
            dq.push_front(x);
        } else if (operation == "push_back") {
            int x;
            cin >> x;
            dq.push_back(x);
        } else if (operation == "pop_front") {
            if (!dq.empty()) {
                cout << dq.front() << endl;
                dq.pop_front();
            } else {
                cout << "Empty" << endl;
            }
        } else if (operation == "pop_back") {
            if (!dq.empty()) {
                cout << dq.back() << endl;
                dq.pop_back();
            } else {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}
