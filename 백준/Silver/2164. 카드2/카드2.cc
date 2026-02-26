#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin >> n;
    queue<int> q;

    for (int i=1; i<n+1; i++){
        q.push(i);
    }

    int m = 0;
    int last;
    while(!q.empty()){ // q에 아무것도 남지 않을 때까지
        if ( m % 2 == 0) {
            last = q.front();
            q.pop();
            m++;
        } else {
            last = q.front();
            q.pop();
            q.push(last);
            m++;
        }
    }
    cout << last << "\n";
}