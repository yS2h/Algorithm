#include <bits/stdc++.h>
using namespace std;

int visited[101];
vector<int> p[101];

void dfs(int a, int d) {
    for (int i = 0; i < p[a].size(); i++) {
        int next = p[a][i];
        if (visited[next] == 0) {
            visited[next] = d + 1;
            dfs(next, visited[next]);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, m, x, y;
    cin >> n >> a >> b >> m;
    while (m--) {
        cin >> x >> y;
        p[x].push_back(y);
        p[y].push_back(x);
    }

    dfs(a, 0);
    if (visited[b] == 0)
        cout << - 1;
    else
        cout << visited[b];

    return 0;
}
