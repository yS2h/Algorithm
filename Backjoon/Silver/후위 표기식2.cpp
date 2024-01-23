#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int N, i;
    string str;
    cin >> N >> str;
    stack<double> s;
    vector<int> v(N);

    for (i = 0; i < N; i++)
        cin >> v[i];

    for (char c : str) {
        if (isalpha(c))
            s.push(v[c- 'A']);
        else {
            double a, b;
            b = s.top(); s.pop();
            a = s.top(); s.pop();
            switch (c) {
                case '+' : s.push(a + b);
                    break;
                case '-' : s.push(a - b);
                    break;
                case '*' :s.push(a * b);
                    break;
                case '/' : s.push(a / b);
                    break;
            }
        }
    }

    cout << fixed; cout.precision(2);
    cout << s.top() << '\n';

    return 0;
}
