#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> W(10), K(10);

    for (int i = 0; i < 20; i++) {
        if (i >= 10)
            cin >> K[i - 10];
        else
            cin >> W[i];
    }

    sort(W.begin(), W.end());
    sort(K.begin(), K.end());

    cout << W[7] + W[8] + W[9] << " " << K[7] + K[8] + K[9];

    return 0;
}