#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int sum = 64;
    int min = 0;
    while ( sum != x ) {
        if ( min == 0 ) {
            sum = sum >> 1; //32
            min = sum; // 32
            if ( sum > x ){
                min = 0;
            }
        } else {
            min = min >> 1; 
            if ( sum + min <= x ) {
                sum = sum + min; 
            }
        } 
    }

    int count = 0;
    while( sum ) {
        if ( sum % 2 == 1 ){
            count++;
        }
        sum = sum/2;
    }
    cout << count << "\n";
}