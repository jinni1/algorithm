#include <iostream>
#include <string>

using namespace std;

int main() {
    int num[26] = {};

    string word;
    getline(cin, word);
    int max = 0;
    bool sameNum = false;

    for (int i = 0 ; i < word.length() ; i++ ) {
        word[i] = toupper(word[i]);
        num[ word[i] - 'A'] +=1;
        
    }

    for ( int i = 1 ; i < 26 ; i++ ){
        if (num[i] > num[max]) {
            max = i;
            sameNum = false;
        }
        else if(num[i] == num[max]) {
            sameNum = true;
        }
        else {}
    }

    if (sameNum) {
        cout << '?' << endl;
    }
    else {
        cout << char('A' + max) << endl;
    }
}