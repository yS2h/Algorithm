#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M, i;

    cin >> N;
    map<int, bool> a;
    while (N--) {
        int n;
        cin >> n;
        a.insert({n, true});
    }

    cin >> M;
    int b[M];
    for (i = 0; i < M; i++)
        cin >> b[i];

    for (auto p : b) {
        if (a[p])
            cout << 1 << ' ';
        else
            cout << 0 << ' ';
    }

    return 0;
}


