#include <iostream>
#include <string>

using namespace std;

int main() {
    int num;
    cin >> num;
    int len = 2*num -1;

    for (int i=1; i<=num ; i++) {
        int star = i*2-1;
        int blank = num - i;
        for(int j=0; j<blank; j++){
            cout<<" ";
        }
        for(int j=0; j<star; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for (int i=1; i<num ; i++) {
        int star = len-i*2;
        int blank = (len-star)/2;
        for(int j=0; j<blank; j++){
            cout<<" ";
        }
        for(int j=0; j<star; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}