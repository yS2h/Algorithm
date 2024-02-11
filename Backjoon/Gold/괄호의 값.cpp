#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    stack<char> b;
    int sum = 0, num = 1;
    bool tf = true;

    s = regex_replace(s, regex("\\(\\)"), "a");
    s = regex_replace(s, regex("\\[\\]"), "b");
    for (char c : s) {
        if (c == '(') {
            b.push(c);
            num *= 2;
        } else if (c == '[') {
            b.push(c);
            num *= 3;
        } else if (c == ')') {
            if (b.empty() || b.top() != '(') {
                tf = false;
                break;
            }
            num /= 2;
            b.pop();
        } else if (c == ']') {
            if (b.empty() || b.top() != '[') {
                tf = false;
                break;
            }
            num /= 3;
            b.pop();
        } else if (c == 'a') {
            sum += num * 2;
        } else {
            sum += num * 3;
        }
    }
    if (!b.empty())
        tf = false;
    if (tf)
        cout << sum << '\n';
    else
        cout << 0 << '\n';

    return 0;
}
