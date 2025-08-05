#include <iostream>
#include <string>

using namespace std;

int main() {
    int input;
    int n = 1; 
    int count = 1;
    int line = 0;
    cin >> input;
    if ( input != 1) {
        while ( input > n ) {
            count++; 
            line++; 
            n = n + 6 * line; // 1, 7, 19, 37, 61, ... 
        }
    }
   cout << count;
}