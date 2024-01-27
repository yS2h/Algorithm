#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int N, M, i, j, k, cnt = 0;
    cin >> N >> M;
    string wood[51];

    for (i = 0; i < N; i++)
        cin >> wood[i];

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            if (wood[i][j] == '-') {
                for (k = j; k < M; k++) {
                    if (wood[i][k] != '-')
                        break;
                    wood[i][k] = 'x';
                }
                cnt++;
            }
            if (wood[i][j] == '|') {
                for (k = i; k < N; k++) {
                    if (wood[k][j] != '|')
                        break;
                    wood[k][j] = 'x';
                }
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}
