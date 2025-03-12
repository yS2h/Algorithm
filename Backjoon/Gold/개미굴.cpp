#include <bits/stdc++.h>
using namespace std;

struct Trie {
    map<string, Trie*> m;
};

Trie* root = new Trie;

void print(Trie* node, int depth) {
    for (auto i : node->m) {
        cout << string(depth * 2, '-') << i.first << "\n";
        print(i.second, depth + 1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    while (N--) {
        int K;
        cin >> K;
        Trie* node = root;
        while (K--) {
            string t;
            cin >> t;
            if (node->m.find(t) == node->m.end()) {
                node->m[t] = new Trie;
            }
            node = node->m[t];
        }
    }

    print(root, 0);
    return 0;
}