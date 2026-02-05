#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Y = 0, M = 0;
    vector<int> v;

    cin >> N;

    for (int i = 0; i < N; i++) {
        int n;
        cin >> n;
        v.push_back(n);
    }
    for (int i : v)
        Y += 10 + (i / 30) * 10;

    for (int i : v)
        M += 15 + (i / 60) * 15;

    if (Y > M)
        cout << "M " << M;
    else if (Y < M)
        cout << "Y " << Y;
    else
        cout << "Y M " << Y;
}