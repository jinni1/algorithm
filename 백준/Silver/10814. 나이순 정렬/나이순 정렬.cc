#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
    return a.first < b.first;
}

int main()
{
    cin.tie(NULL); 
    ios_base::sync_with_stdio(false);
    
    int n;
    cin >> n;
    pair<int, string> user;
    vector<pair<int, string>> users;

    for (int i=0; i<n; i++) {
        cin >> user.first >> user.second;
        users.push_back(user);
    }

    stable_sort(users.begin(), users.end(), compare);

    for (int i=0; i<n; i++){
        cout << users[i].first << " " << users[i].second << "\n"; 
    }
}