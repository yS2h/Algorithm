#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    int arr[2000001] = {0, };
    cin >> N;

    while (N--) {
        int n;
        cin >> n;
        arr[n + 1000000]++;
    }

    int ans = -1000000;
    for (int i : arr) {
        if (i != 0) {
            for (int j = 0; j < i; j++)
                cout << ans << '\n';
        }
        ans++;
    }

    return 0;
}