#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, cnt = 0;
    cin >> N;
    set<string> s;

    while (N--) {
        string str;
        cin >> str;
        if (!str.compare("ENTER")) {
            cnt += s.size();
            s.clear();
        }
        else
            s.insert(str);
    }
    cnt += s.size();
    cout << cnt;

    return 0;
}
