#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int N, M, i;
    cin >> N >> M;
    set<string> v, ans;

    for (i = 0; i < N + M; i++) {
        string name;
        cin >> name;

        if (i < N)
            v.insert(name);
        else if (v.find(name) != v.end())
            ans.insert(name);
    }

    cout << ans.size() << "\n";
    for (auto p : ans)
        cout << p << "\n";

    return 0;
}
