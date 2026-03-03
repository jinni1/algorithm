#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<vector<char>> v(N, vector<char>(M));
    vector<char> v1;

    // NM 보드 입력 받음
    for (int i=0; i<N; i++) {
        for (int k=0; k<M; k++) {
            cin >> v[i][k];
        }
        v.push_back(v1);
    }

    int minCount;
    int minTotal=64;
    for (int i=0; i<=N-8; i++){
        for (int k=0; k<=M-8; k++) {
            int count = 0;
            for (int x=0; x<8; x++) { // 하나의 8x8 체스판
                for (int y=0; y<8; y++) {
                    if ( (x+y)%2 ) {
                        if(v[i+x][k+y]!='W'){
                            count++;
                        }
                    } else {
                        if(v[i+x][k+y]!='B') {
                            count++;
                        }
                    }
                }
            }
            minCount = min(count, 64-count);
            minTotal = min(minCount, minTotal);
        }
    }

    cout << minTotal << "\n";
}
