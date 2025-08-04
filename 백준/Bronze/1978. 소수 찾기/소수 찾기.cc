#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;

    for(int i=0; i<n; i++){
        int input;
        cin >> input;
        if ( input % 2 == 0 )  { 
            if (input == 2) count+=1;
        }
        else {
            int k = 3;
            while ( input >= k){
                if ( k * k > input) { 
                    count++;
                    break;
                } else if ( input % k == 0) {
                    break;
                }
                else {
                    k+=2;
                }
            }
        }
        
    }
    cout << count << endl;
}