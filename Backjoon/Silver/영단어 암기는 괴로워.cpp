#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<string, int>& a, const pair<string, int>& b);

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int N, M;
    cin >> N >> M;
    unordered_map<string, int> m;
    while (N--) {
        string s;
        cin >> s;
        if (s.length() >= M)
            m[s]++;
    }
    vector<pair<string,int>> v(m.begin(), m.end() );
    sort(v.begin(), v.end(), compare);
    for (auto& i : v)
        cout << i.first << "\n";
}

bool compare(const pair<string, int>& a, const pair<string, int>& b) {
    if (a.second == b.second) {
        if (a.first.length() == b.first.length())
            return a.first < b.first;
        return a.first.length() > b.first.length();
    }
    else return a.second > b.second;
}