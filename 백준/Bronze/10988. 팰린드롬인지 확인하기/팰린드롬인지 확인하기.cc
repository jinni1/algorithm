#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    int boo=1;

    cin >> word;

    int len = word.length();
    int half = len/2;

    for (int i = 0 ; i < half ; i++) {
        if (word[i] != word[len-i-1]) {
            boo = 0;
        }
    }

    cout << boo;
}