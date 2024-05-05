#include <bits/stdc++.h>
using namespace std;

bool visited[101];
vector<int> computer[101];
int cnt = 0, n, p;

void dfs(int x) {
    cnt++;
    visited[x] = true;
    for (int i : computer[x]) {
        if (!visited[i])
            dfs(i);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> p;
    while (p--) {
        int x, y;
        cin >> x >> y;
        computer[x].push_back(y);
        computer[y].push_back(x);
    }

    dfs(1);
    cout << cnt - 1;

    return 0;
}
