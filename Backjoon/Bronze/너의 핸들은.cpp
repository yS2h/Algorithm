#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, I;
    vector<string> V;
    cin >> N >> I;

    while (N--) {
        string S;
        cin >> S;
        V.push_back(S);
    }

    sort(V.begin(), V.end());
    cout << V[I - 1];

    return 0;
}