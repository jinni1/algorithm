#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    stack<int> st;
    vector<char> result;
    bool boolResult = true;
    int next=1;

    for (int i=0; i<n; i++){
        cin >> arr[i];

        if (st.empty()) {
            st.push(next);
            next++;
            result.push_back('+');
        }
        while(st.top() != arr[i]){
            if (st.top() < arr[i] ) {
                st.push(next);
                next++;
                result.push_back('+');
            } else if (st.top() > arr[i]){
                boolResult = false;
                break;
            } 
        }

        result.push_back('-');
        st.pop();
    }

    if (boolResult) {
        for (char c : result) {
            cout << c << '\n';
        }
    } else {
        cout << "NO" << endl;
    }
}