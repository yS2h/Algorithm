#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num, N;
    cin >> num;

    int d[num];

    for (int i = 0; i < num; i++)
        cin >> d[i];

    sort(d, d + num);
    N = d[0] * d[num - 1];

    cout << N;

    return 0;
}


