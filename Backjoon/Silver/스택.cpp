#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    stack<int> s;
    int N;
    cin >> N;

    while (N--) {
        string str;
        cin >> str;
        if (str == "push") {
            int n;
            cin >> n;
            s.push(n);
        } else if (str == "pop") {
            if (s.empty())
                cout << -1 << '\n';
            else {
                cout << s.top() << '\n';
                s.pop();
            }
        } else if (str == "size") {
            cout << s.size() << '\n';
        } else if (str == "empty") {
            if (s.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        } else {
            if (s.empty())
                cout << -1 << '\n';
            else
                cout << s.top() << '\n';
        }
    }
    return 0;
}