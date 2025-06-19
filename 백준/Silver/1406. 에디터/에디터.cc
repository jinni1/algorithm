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