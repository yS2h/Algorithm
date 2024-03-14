#include <bits/stdc++.h>
using namespace std;

int insertion_sort(vector<int>& A, int K);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<int> A(N);

    for (int i = 0; i < N; i++)
        cin >> A[i];

    if (insertion_sort(A, K)) {
        for (auto i : A)
            cout << i << ' ';
    } else {
        cout << -1;
    }

    return 0;
}

int insertion_sort(vector<int>& A, int K) {
    int cnt = 0;
    for (int i = 1; i < A.size(); i++) {
        int loc = i - 1;
        int newItem = A[i];

        while (0 <= loc && newItem < A[loc]) {
            A[loc + 1] = A[loc];
            loc--;
            cnt++;
            if (cnt == K) {
                return 1;
            }
        }
        if (loc + 1 != i) {
            A[loc + 1] = newItem;
            cnt++;
            if (cnt == K)
                return 1;
        }
    }
    return 0;
}