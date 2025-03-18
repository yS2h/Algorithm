#include <bits/stdc++.h>
using namespace std;
using T = tuple<string, int, int, int>;

bool compare(T p1, T p2) {
    if (get<1>(p1) != get<1>(p2))
        return get<1>(p1) > get<1>(p2);
    if (get<2>(p1) != get<2>(p2))
        return get<2>(p1) < get<2>(p2);
    if (get<3>(p1) != get<3>(p2))
        return get<3>(p1) > get<3>(p2);
    return get<0>(p1) < get<0>(p2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<T> V(N);

    for (auto &[s, x, y, z] : V)
        cin >> s >> x >> y >> z;

    sort(V.begin(), V.end(), compare);

    for (auto &[s, x, y, z] : V)
        cout << s << "\n";

    return 0;
}