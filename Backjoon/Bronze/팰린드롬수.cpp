#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string N;

    while (cin >> N && N != "0") {
        bool yes = true;
        for (int i = 0; i < N.size() / 2; i++) {
            if (N[i] != N[N.size() - 1 - i]) {
                yes = false;
                break;
            }
        }
        if (yes)
            cout << "yes" << "\n";
        else
            cout << "no" << "\n";
    }

    return 0;
}

