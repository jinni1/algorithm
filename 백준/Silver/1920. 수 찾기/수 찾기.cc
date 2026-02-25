#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    vector <int> A;
    cin >> n ;
    for ( int i=0; i<n; i++ ) {
        int x;
        cin >> x;
        A.push_back(x);
    } // 배열 입력

    sort(A.begin(), A.end()); // 배열 정렬

    int m;
    cin >> m;
    for ( int i=0; i<m; i++) {
        int y;
        cin >> y;
        cout << binary_search(A.begin(), A.end(), y) << "\n";
    }
}