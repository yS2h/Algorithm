#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, B, remain;
    string num;
    cin >> N >> B;

    while (N > 0) {
        remain = N % B;
        if (remain >= 10) {
            remain += 55;
            num = (char)remain + num;
        } else {
            num = (char)(remain + '0') + num;
        }
        N /= B;
    }

    cout << num;

    return 0;
}