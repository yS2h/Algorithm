#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n - 1; i++) {
        if (i < n - m)
            cout << i << ' ' << i + 1 << '\n';
        else
            cout << n - m << ' ' << i + 1 << '\n';
    }

    return 0;
}


