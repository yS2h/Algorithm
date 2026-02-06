#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, C;
    cin >> A >> B >> C;
    int N = A * B * C;
    string s = to_string(N);
    vector<int> v(10, 0);
    for (auto i : s)
        v[i -'0']++;

    for (auto i : v)
        cout << i << "\n";
}