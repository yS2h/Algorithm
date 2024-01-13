#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, i, sum = -1;
    cin >> N;
    vector<int> v(N);

    for (i = 0; i < N; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    while(--N) {
        if (N == 1)
            break;
        if (v[N - 1] + v[N - 2] > v[N]) {
            sum = v[N] + v[N - 1] + v[N - 2];
            break;
        }
    }

    cout << sum;

    return 0;
}