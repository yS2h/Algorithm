#include <bits/stdc++.h>
using namespace std;

int insertion_sort(vector<int>& A, int K);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, i, Aidx = 0, Bidx = 0;
    cin >> N >> M;

    vector<int> A(N);
    vector<int> B(M);
    vector<int> C;
    for (i = 0; i < N; i++)
        cin >> A[i];
    for (i = 0; i < M; i++)
        cin >> B[i];

    for (i = 0; i < N + M; i++) {
        if (Aidx == N) {
            C.push_back(B[Bidx++]);
        } else if (Bidx == M) {
            C.push_back(A[Aidx++]);
        } else if (A[Aidx] <= B[Bidx]) {
            C.push_back(A[Aidx++]);
        } else {
            C.push_back(B[Bidx++]);
        }
    }

    for (int p : C)
        cout << p << ' ';
}
