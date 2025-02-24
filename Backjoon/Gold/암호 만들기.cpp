#include <bits/stdc++.h>
using namespace std;

int L, C;
vector<char> input;
vector<int> password;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void cypher(int start, int v, int c) {
    if (password.size() == L) {
        if (v > 0 && c >= 2) {
            for (char i : password) {
                cout << i;
            }
            cout << "\n";
        }
        return;
    }

    for (int i = start; i < C; i++) {
        password.push_back(input[i]);
        if (isVowel(input[i]))
            cypher(i + 1, v + 1, c);
        else
            cypher(i + 1, v, c + 1);
        password.pop_back();
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> L >> C;

    for (int i = 0; i < C; i++) {
        char x;
        cin >> x;
        input.push_back(x);
    }

    sort(input.begin(), input.end());
    cypher(0, 0, 0);

    return 0;
}