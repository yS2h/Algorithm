#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, i, j;
    int arr[21];
    for (i = 1; i < 21; i++)
        arr[i] = i;

    for (i = 0; i < 10; i++) {
        cin >> a >> b;
        reverse(arr + a, arr + b + 1);
    }

    for (i = 1; i < 21; i++)
        cout << arr[i] << " ";

    return 0;
}
