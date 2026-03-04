#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
    unordered_set<int> s1;
    unordered_set<int> s2;
    vector<int> v;
    int dn = 0;
    for(int i=0; i<10000; i++) {
        int n = i+1;
        int dn = n;
        int tmp = n;
        while (tmp > 0) {
            dn+= tmp%10;
            tmp/=10;
        }
        s2.insert(dn);
        s1.insert(n);
    }

    for( auto it = s2.begin(); it != s2.end(); it++ ) {
        s1.erase(*it);
    }
    
    for( auto it1 = s1.begin(); it1 != s1.end(); it1++) {
        v.push_back(*it1);
    }

    sort(v.begin(), v.end());
    for (int x: v){
        cout << x << "\n";
    }
}