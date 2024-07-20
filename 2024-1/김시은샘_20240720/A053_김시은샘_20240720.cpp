#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    stack<int> s;

    for (int i = 0; i < n; ++i) {
        string command;
        cin >> command;

        if (command == "push") {
            int x;
            cin >> x;
            s.push(x);
        } else if (command == "pop") {
            if (s.empty()) {
                cout << -1 << endl;
            } else {
                cout << s.top() << endl;
                s.pop();
            }
        } else if (command == "size") {
            cout << s.size() << endl;
        } else if (command == "empty") {
            cout << (s.empty() ? 1 : 0) << endl;
        } else if (command == "top") {
            if (s.empty()) {
                cout << -1 << endl;
            } else {
                cout << s.top() << endl;
            }
        }
    }

    return 0;
}