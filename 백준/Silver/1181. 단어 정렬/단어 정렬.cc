#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool compare(string a, string b) {
    if(a.length() == b.length()) {
        return a < b;
    } else {
        return a.length() < b.length();
    }
}

int main()
{
    int n;
    vector<string> v;
    cin >> n;
    for (int i=0; i<n; i++) {
        string word;
        cin >> word;
        v.push_back(word);
    }

    sort( v.begin(), v.end(), compare); 

    v.erase(unique(v.begin(), v.end()), v.end()); // 중복 제거

    for (int i=0; i < v.size() ;i++){
        cout << v[i] << endl;
    }
}