#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string str1 = ",r\'\"7";
    string str2 = "r`-_   ,'  ,/";
    string str3 = " \\. \". L_r\'";
    string str4 = "`~\\/";
    string str5 = "|";
    string str6 = "|";
    cout << setw(14) << str1 << endl;
    cout << setw(13) << str2 << endl;
    cout << setw(11) << str3 << endl;
    cout << setw(7) << str4 << endl;
    cout << setw(7) << str5 << endl;
    cout << setw(7) << str6 << endl;
}