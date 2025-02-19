#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, power = 0, A, retry = 2, same = 0;
    cin >> N;

    while (N--) {
        cin >> A;
        if (A == same) {
            retry *= 2;
            power += retry;
        }
        else {
            same = A;
            retry = 2;
            power += retry;
        }
        if (power >= 100) {
            power = 0;
            same = 0;
        }
    }

    cout << power;

    return 0;
}