#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        string str;
        getline(cin, str);
        if (str == ".") break;
        bool tf = true;
        stack<char> s;
        for (char c : str) {
            if (c == '(' || c == '[')
                s.push(c);
            else if (c == ')') {
                if (s.empty() || s.top() != '(') {
                    tf = false;
                    break;
                }
                s.pop();
            } else if (c == ']') {
                if (s.empty() || s.top() != '[') {
                    tf = false;
                    break;
                }
                s.pop();
            }
        }
        if (!s.empty())
            tf = false;
        if (tf)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }
    return 0;
}
