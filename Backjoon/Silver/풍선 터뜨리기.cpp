#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    deque<pair<int, int>> DQ;

    int N, n;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> n;
        DQ.push_back({i + 1, n});
    }

    while (!DQ.empty()) {
        cout << DQ.front().first << " ";
        n = DQ.front().second;
        DQ.pop_front();

        if (n > 0) {
            while (n-- > 1) {
                DQ.push_back(DQ.front());
                DQ.pop_front();
            }
        }
        else {
            while (n++ < 0) {
                DQ.push_front(DQ.back());
                DQ.pop_back();
            }
        }
    }

    return 0;
}