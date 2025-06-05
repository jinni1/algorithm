#include <iostream>
#include <string>

using namespace std;

int main() {
    string croAlpa;
    cin >> croAlpa;
    int num = 0;

    for (int i=0 ; i < croAlpa.length() ; i++){
        if(croAlpa[i] == 'c'){
            if(croAlpa[i+1] == '=' || croAlpa[i+1] == '-') {
                num++; i++;
            }
            else { num++; }
        } 
        else if(croAlpa[i] == 'd') {
            if(croAlpa[i+1] == 'z' && croAlpa[i+2] == '=') {
                i = i + 2;
                num++;
            }
            else if (croAlpa[i+1] == '-') {
                num++; i++;
            }
            else { num++; }
        }
        else if( croAlpa[i] == 'l' && croAlpa[i+1] == 'j') {num++; i++;}
        else if( croAlpa[i] == 'n' && croAlpa[i+1] == 'j') {num++; i++;}
        else if( croAlpa[i] == 's' && croAlpa[i+1] == '=') {num++; i++;}
        else if( croAlpa[i] == 'z' && croAlpa[i+1] == '=') {num++; i++;}
        else {
            num++;
        }
    }
    cout << num;
}
