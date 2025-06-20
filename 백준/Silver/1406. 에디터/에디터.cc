#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    string str;
    cin >> str;

    int n;
    cin >> n;
    cin.ignore();

    stack<char> left;
    stack<char> right;

    for (int i=0; i<str.length(); i++){
        left.push(str[i]);
    }

    for (int i=0; i<n; i++) {
        string cmd;
        getline(cin, cmd);
        if (cmd[0] == 'L' && !left.empty()) {
            char c = left.top();
            right.push(c);
            left.pop();
        } else if (cmd[0] == 'D' && !right.empty()) {
            char c = right.top();
            left.push(c);
            right.pop();
        } else if (cmd[0] == 'B' && !left.empty()) {
            left.pop();
        } else {
            if (cmd[0] == 'P') {
                char c = cmd[2];
                left.push(c);
            }
        }
    }

    while (!left.empty()) {
        char c = left.top();
        right.push(c);
        left.pop();
    }

    while (!right.empty()) {
        char a= right.top();
        cout << a ;
        right.pop();
    }
}