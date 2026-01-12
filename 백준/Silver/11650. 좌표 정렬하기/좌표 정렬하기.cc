#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) {
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}

int main()
{
    cin.tie(NULL); 
    ios_base::sync_with_stdio(false);
    
    int n;
    cin >> n;
    pair<int, int> point;
    vector<pair<int, int>> points;

    for (int i=0; i<n; i++) {
        cin >> point.first >> point.second;
        points.push_back(point);
    }

    sort(points.begin(), points.end(), compare);

    for (int i=0; i<n; i++){
        cout << points[i].first << " " << points[i].second << "\n"; 
    }
}