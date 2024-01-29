#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, cnt = 0;
    string s;
    cin >> N;
    while (N--) {
        cin >> s;
        bool tf = true;
        int arr[26] = {0, };
        char c = 'A';
        for (int i = 0; i < s.length(); i++) {
            if (c == s[i])
                continue;
            c = s[i];
            if (arr[c - 97]) {
                tf = false;
                break;
            }
            arr[c - 97] = 1;
        }
        if (tf)
            cnt++;
    }
    cout << cnt;
}
