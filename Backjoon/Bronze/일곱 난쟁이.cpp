#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> dwarf(9);
    int sum = 0;

    for (int i = 0; i < 9; i++) {
        cin >> dwarf[i];
        sum += dwarf[i];
    }

    sort(dwarf.begin(), dwarf.end());

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - dwarf[i] - dwarf[j] == 100) {
                for (int k = 0; k < 9; k++) {
                    if (k == i || k == j)
                        continue;
                    cout << dwarf[k] << "\n";
                }
                return 0;
            }
        }
    }
}