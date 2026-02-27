#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int N, n;
    cin >> N;
    vector<int> v;

    // 가지고 있는 숫자 카드들
    for(int i=0; i<N; i++) {
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());

    int M, m;
    string result = "";
    cin >> M;
    for (int i=0; i<M; i++) {
        cin >> m;
        int count = upper_bound(v.begin(), v.end(), m) - lower_bound(v.begin(), v.end(), m);
        result += to_string(count);
        result += " ";
    }

    cout << result << "\n";
}