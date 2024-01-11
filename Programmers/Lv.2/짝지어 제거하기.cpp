#include <iostream>
#include <string>
using namespace std;

int solution(string s)
{
    int answer = -1;
    int top = -1;
    char arr[1000001];
    for (int i = 0; i < s.length(); i++) {
        if (arr[top] == s[i])
            arr[top--];
        else arr[++top] = s[i];
    }

    answer = top == -1 ? 1 : 0;
    return answer;
}