#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N == 1)
        cout << 0;
    else
        cout << (N * N) / 2 + (N * N) % 2;

    return 0;
}
