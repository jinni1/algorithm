#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<stack<char>> st(n);
    string line;

    for (int i=0; i<n; i++) {
        getline(cin, line);
        for (int j=0; j< line.size(); j++){
            if ( st[i].empty() ){
                st[i].push(line[j]);
            } else if ( line[j] == ')' && st[i].top() == '('){
                st[i].pop();
            } else {
                st[i].push(line[j]);
            }
        }
        if (st[i].empty()){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}