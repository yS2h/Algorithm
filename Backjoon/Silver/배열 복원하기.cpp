#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int H, W, X, Y;
    cin >> H >> W >> X >> Y;

    int B[H + X][W + Y];

    for (int i = 0; i < H + X; i++)
        for (int j = 0; j < W + Y; j++)
            cin >> B[i][j];

    for (int i = X; i < H; i++)
        for (int j = Y; j < W; j++)
            B[i][j] -= B[i - X][j - Y];

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cout << B[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
