// stack
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

// list
/*
#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
    string str;
    int n;

    cin >> str;
    cin >> n;
    cin.ignore();

    list<char> chars(str.begin(), str.end()); // 문자열을 list에 입력
    auto cursor = chars.end();

    for (int i=0; i<n; i++){
        string input;
        string cmd;
        getline(cin, cmd); // 입력 받은 명령어 

        if (cmd == "L") {
            if (cursor != chars.begin()) {
                cursor--;
            }
        } else if (cmd == "D") {
            if (cursor != chars.end()) {
                cursor++;
            }
        } else if (cmd == "B") {
            if (cursor != chars.begin()) {
                cursor--;
                cursor = chars.erase(cursor); // 삭제된 다음 위치를 알려줌 
            }
        } else {
            if (cmd[0] == 'P') {
                chars.insert(cursor, cmd[2]);
            }
        }
    }

    for (cursor = chars.begin(); cursor != chars.end(); cursor++){
        cout << *cursor;
    }

}
*/
