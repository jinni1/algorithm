#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    queue<int> q;
    string result = "";

    for(int i=1; i<N+1; i++) {
        q.push(i);
    }

    for(int i=0; i<N; i++) {
        for (int j=0; j<K-1; j++) {
            int f = q.front();
            q.pop();
            q.push(f);
        }
        int f = q.front();
        q.pop();
        result += to_string(f);
        result += ", ";
    }

    result.erase(result.end() - 2, result.end());
    cout << "<" << result << ">" << "\n";
}