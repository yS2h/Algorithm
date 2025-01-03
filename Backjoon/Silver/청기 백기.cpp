#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, sum = 1;
    cin >> N;

    for (int i = 2; i <= N; i++) {
        if (i * i > N)
            break;
        sum++;
    }

    cout << sum;

    return 0;
}