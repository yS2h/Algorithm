#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, i;
    long long arr[91] = {0, 1, };
    cin >> N;
    for (i = 2; i <= N; i++)
        arr[i] = arr[i - 2] + arr[i - 1];
    cout << arr[N];
    return 0;
}