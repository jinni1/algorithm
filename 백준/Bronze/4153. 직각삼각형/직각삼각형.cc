#include <iostream>
#include <string>

using namespace std;

int main() {
    int input1, input2, input3;
    cin >> input1 >> input2 >> input3;
    while ( input1 + input2 + input3 ) {
        string result;
        if ( input3*input3 - input2*input2 - input1*input1 == 0){
            result = "right";
        } else if ( input2*input2 - input3*input3 - input1*input1 == 0 ){
            result = "right";
        } else if ( input1*input1 - input2*input2 - input3*input3 == 0 ){
            result = "right";
        } else {
            result = "wrong";
        }
        cout << result << endl;
        cin >> input1 >> input2 >> input3;
    }
}