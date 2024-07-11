#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    cin.ignore(); 

    unordered_map<string, string> servers;
    for (int i = 0; i < n; ++i) {
        string name, ip;
        cin >> name >> ip;
        servers[ip] = name;
    }

    cin.ignore(); 

    for (int i = 0; i < m; ++i) {
        string line;
        getline(cin, line);

        size_t pos = line.find(' ');
        string command = line.substr(0, pos);
        string ip = line.substr(pos + 1, line.length() - pos - 2); 

        cout << command << " " << ip << "; #" << servers[ip] << endl;
    }

    return 0;
}

