#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int arr[26] = {0, };

    for (char i : s) {
        if (i > 96)
            arr[i - 97]++;
        else
            arr[i - 65]++;
    }

    int M = -1;
    int idx = 0;
    for (int i = 0; i < 26; i++) {
        if (arr[i] > M) {
            M = arr[i];
            idx = i;
        } else if (arr[i] == M)
            idx = -1;
    }

    if (idx == -1)
        cout << "?";
    else
        cout << char(idx + 65);

    return 0;
}
