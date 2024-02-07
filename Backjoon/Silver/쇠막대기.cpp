#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string in;
    cin >> in;
    stack<char> b;
    int cnt = 0;

    in = regex_replace(in, regex("\\(\\)"), "r");
    for (char c : in) {
        if (c == 'r') {
            cnt += b.size();
        } else if (c == '(') {
            cnt++;
            b.push(c);
        } else if (c == ')') {
            b.pop();
        }
    }
    cout << cnt;
    return 0;
}
