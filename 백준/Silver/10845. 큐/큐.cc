#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string c;
    int m;
    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (c == "push")
        {
            cin >> m;
            q.push(m);
        }
        else if (c == "front")
        {
            if (q.empty() == 1)
            {
                cout << "-1" << "\n";
            }
            else
            {
                cout << q.front() << "\n";
            }
        }
        else if (c == "back")
        {
            if (q.empty() == 1)
            {
                cout << "-1" << "\n";
            }
            else
            {
                cout << q.back() << "\n";
            }
        }
        else if (c == "size")
        {
            cout << q.size() << "\n";
        }
        else if (c == "empty")
        {
            cout << q.empty() << "\n";
        }
        else if (c == "pop")
        {
            if (q.empty() == 1)
            {
                cout << "-1" << "\n";
            }
            else
            {
                cout << q.front() << "\n";
                q.pop();
            }
        }
    }
}