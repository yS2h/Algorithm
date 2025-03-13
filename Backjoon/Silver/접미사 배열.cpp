#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    vector<string> v;

    cin >> S;

    while(!S.empty()) {
        v.push_back(S);
        S.erase(0, 1);
    }

    sort(v.begin(), v.end());

    for (auto i : v)
        cout << i << "\n";

    return 0;
}