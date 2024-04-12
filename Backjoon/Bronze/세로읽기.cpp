#include <bits/stdc++.h>
using namespace std;

string arr[5];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    for (int i = 0; i < 15; i++)
        for (int j = 0; j < 5; j++) {
            if (!arr[j][i])
                continue;
            cout << arr[j][i];
        }

    return 0;
}
