#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int answer = 0;
    string chess;

    for (int i = 0; i < 8; i++) {
        cin >> chess;
        for (int j = i % 2; j < 8; j+=2) {
            if (chess[j] == 'F')
                answer++;
        }
    }

    cout << answer;

    return 0;
}
