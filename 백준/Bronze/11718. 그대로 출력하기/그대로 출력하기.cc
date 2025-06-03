#include <iostream>
#include <string>

using namespace std;

int main() {    
    string input;
    string result[100];
    getline(cin, input);
    int number = 0;
    while(input != "") {
        result[number] = input;
        number++;
        getline(cin, input);
    }

    for (int i = 0 ; i < number ; i++){
        cout << result[i] << endl;
    }

    return 0;
}