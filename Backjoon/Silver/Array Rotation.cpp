#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N;
    vector v(N, vector<int>(N));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> v[i][j];

    cin >> Q;

    while (Q--) {
        int a, b;
        cin >> a;
        if (a == 1) {
            cin >> b;
            b -= 1;
            rotate(v[b].rbegin(), v[b].rbegin() + 1, v[b].rend());
        } else if (a == 2) {
            vector A(N, vector<int>(N));
            for (int i = 0; i < N; i++)
                for (int j = 0; j < N; j++)
                    A[j][N-i-1] = v[i][j];
            v = A;
        }
    }

    for (auto i : v) {
        for (auto j : i)
            cout << j << " ";
        cout << "\n";
    }
}