#include <iostream>
#include <string>

using namespace std;

int main() {
    int white[6];
    int origin[6] = {1, 1, 2, 2, 2, 8};
    int result[6];
    for(int i=0; i<6;i++){
        cin >> white[i];
        result[i] = origin[i] - white[i];
    }

    for(int i=0;i<6;i++){
        cout<<result[i]<<' ';
    }
}