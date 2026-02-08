#include <bits/stdc++.h>
using namespace std;

int num[10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string N;
    int s = 0;

    cin >> N;
    for (int i = 0; i < N.length(); i++)
        num[N[i]-'0']++;

    num[6] = (num[6] + num[9] + 1) / 2;

    for (int i = 0; i < 9; i++) {
        if (s < num[i])
            s = num[i];
    }

    cout << s;
}