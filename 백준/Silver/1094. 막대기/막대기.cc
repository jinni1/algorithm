#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int count = 0;
    while( x ) {
        if ( x % 2 == 1 ){
            count++;
        }
        x = x/2;
    }
    cout << count << "\n";
}