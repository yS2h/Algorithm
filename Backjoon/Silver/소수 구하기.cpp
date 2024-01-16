#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, N, i, j;
    int arr[1000001] = {0, };
    cin >> M >> N;
    arr[0] = arr[1] = 1;
    for (i = 2; i <= sqrt(N); i++) {
        if (arr[i]) continue;
        for (j = 2 * i; j <= N; j += i)
            arr[j] = 1;
    }

    for (i = M; i <= N; i++)
        if (!arr[i]) cout << i << "\n";

    return 0;
}