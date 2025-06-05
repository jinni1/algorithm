#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n; // 입력 받은 단어의 갯수
    string words[n];
    int notGroupWord = 0; 

    for (int i = 0 ; i < n ; i++ ){
        cin >> words[i];
    } // 그룹 단어를 입력받음

    string group[n];

    for (int i = 0 ; i < n ; i++ ){
        for(int j = 0 ; j < words[i].length() ; j++){
            if(words[i][j] != words[i][j+1]){
                group[i] += words[i][j];
            }
        }

        int groupLength = group[i].length();

        for(int j = 0 ; j < groupLength ; j++){
            int index = group[i].rfind(group[i][0]);
            if(index != 0) {
                notGroupWord++;
                break;
            }
            else {
                group[i].erase(0,1);
            }
        }
    }
    cout << n - notGroupWord;
}
