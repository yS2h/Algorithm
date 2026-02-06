#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num[5], m = 0;
    for (int i = 0; i < 5; i++) {
        cin >> num[i];
        m += num[i];
    }

    sort(num, num + 5);

    cout << m / 5 << " " << num[2];
}