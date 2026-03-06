#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL); 
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    string s;
    bool S[21] = { false };
    int x;
    for (int i=0; i<n; i++) {
        cin >> s;
        if ( s == "add") {
            cin >> x;
            S[x] = true;
        } else if ( s == "remove" ) {
            cin >> x;
            S[x] = false;
        } else if ( s == "check" ) {
            cin >> x;
            if ( S[x] ) {
                cout << "1" << "\n";
            } else { 
                cout << "0" << "\n";
            }
        } else if ( s == "toggle" ) {
            cin >> x;
            S[x] = !S[x];
        } else if ( s == "all" ) {
            for (int i = 1; i <= 20; i++) {
                S[i] = true;
            }
        } else if ( s == "empty" ) {
            for (int i = 1; i <= 20; i++) {
                S[i] = false;
            }
        }
    }
}