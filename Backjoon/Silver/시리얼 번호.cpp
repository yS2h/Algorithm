#include <bits/stdc++.h>
using namespace std;

bool cmp(string& a, string& b);

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    string s[N];

    for (int i = 0; i < N; i++)
        cin >> s[i];

    sort(s, s + N, cmp);

    for (auto i : s)
        cout << i << '\n';

    return 0;
}

bool cmp(string& a, string& b) {
    if (a.size() != b.size())
        return a.size() < b.size();

    int sumA =0, sumB = 0;
    for (auto i : a) {
        if (isdigit(i))
            sumA += i - '0';
    }
    for (auto i : b) {
        if (isdigit(i))
            sumB += i - '0';
    }
    if (sumA != sumB)
        return sumA < sumB;
    return a < b;
}