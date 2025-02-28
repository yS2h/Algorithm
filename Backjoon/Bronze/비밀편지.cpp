#include <bits/stdc++.h>
using namespace std;

int countDiff(string str1, string str2) {
    int n = 0;
    for (int i = 0; i < 6; i++) {
        if (str1[i] != str2[i])
            n++;
    }
    return n;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s;
    vector<string> message = {"000000", "001111", "010011", "011100", "100110", "101001", "110101", "111010"};
    vector<char> answer;

    cin >> n >> s;

    for (int i = 0; i < n; i ++) {
        string str = s.substr(i * 6, 6);
        bool tf = false;
        for (int j = 0; j < 8; j++) {
            if (countDiff(str, message[j]) <= 1) {
                tf = true;
                answer.push_back(j + 'A');
                break;
            }
        }
        if (!tf) {
            cout << i + 1;
            return 0;
        }
    }

    for (auto i : answer)
        cout << i;

    return 0;
}
