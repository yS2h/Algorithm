#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[502][502];
bool vis[502][502];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int n, m;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int EA = 0, MS = 0;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> board[i][j];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == 0 || vis[i][j])
                continue;
            EA++;
            queue<pair<int,int>> Q;
            vis[i][j] = true;
            Q.emplace(i, j);
            int S = 0;
            while(!Q.empty()){
                S++;
                pair<int,int> cur = Q.front();
                Q.pop();
                for (int dir = 0; dir < 4; dir++) {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                        continue;
                    if (vis[nx][ny] || board[nx][ny] != 1)
                        continue;
                    vis[nx][ny] = true;
                    Q.emplace(nx,ny);
                }
            }
            MS = max(MS, S);
        }
    }

    cout << EA << '\n' << MS;
}