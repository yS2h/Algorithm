#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long A, B;
    cin >> A >> B;

    if (A > B)
        swap(A, B);

    if (A == B || B - A == 1)
        cout << 0 << '\n';
    else {
        cout << B - A - 1 << '\n';
        for (long long i = A + 1; i < B; i++)
            cout << i << ' ';
    }
    return 0;
}