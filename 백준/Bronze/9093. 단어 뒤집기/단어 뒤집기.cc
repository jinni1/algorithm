#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    string line[n];
    string words[n];

    for (int i=0; i<n; i++) {
        getline(cin, line[i]);
        stringstream ss(line[i]);
        string word;

        while (ss>>word) {
            int len = word.length();
            string newWord;
            for (int j = 0; j < len; j++){
                newWord +=word[len-j-1];
            }
            words[i] =  words[i] + newWord + ' ';
        }
        cout << words[i] << endl;
    }

}