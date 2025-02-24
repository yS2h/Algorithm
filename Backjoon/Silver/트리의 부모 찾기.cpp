#include <bits/stdc++.h>
using namespace std;

class Graph {
    int V;
    vector<vector<int>> adj;
    vector<int> parent;

public:
    Graph(int V) {
        this->V = V;
        adj.resize(V);
        parent.resize(V);
    }

    void addEdge(int v, int w) {
        adj[v].push_back(w);
        adj[w].push_back(v);
    }

    void BFS(int start) {
        vector<bool> visit(V, false);
        queue<int> q;

        visit[start] = true;
        q.push(start);

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            for (int i : adj[node]) {
                if (!visit[i]) {
                    visit[i] = true;
                    q.push(i);
                    parent[i] = node;
                }
            }
        }
    }

    void printParent() {
        for (int i = 2; i < V; i++)
            cout << parent[i] << "\n";
    }
};

int main() {
    int N, V, W;
    cin >> N;
    Graph g(N + 1);

    for (int i = 1; i < N; i++) {
        cin >> V >> W;
        g.addEdge(V, W);
    }

    g.BFS(1);
    g.printParent();

    return 0;
}
