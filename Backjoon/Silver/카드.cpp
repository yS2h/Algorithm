#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, cnt = 0, maxCnt = 0, i;
    long long card[100005], maxNum;

    cin >> N;

    for (i = 0; i < N; i++)
        cin >> card[i];
    sort(card, card + N);

    for (i = 0; i < N; i++) {
        if (i == 0 || card[i - 1] == card[i])
            cnt++;
        else {
            if (cnt > maxCnt) {
                maxCnt = cnt;
                maxNum = card[i - 1];
            }
            cnt = 1;
        }
    }
    if (cnt > maxCnt)
        maxNum = card[N - 1];

    cout << maxNum;

    return 0;
}

