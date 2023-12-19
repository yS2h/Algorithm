#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool solution(const char* s) {
    char* stack = (char*)malloc(strlen(s) * sizeof(char));
    int top = -1;
    bool answer = true;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '(')
            stack[++top] = s[i];
        else {
            if (top == -1) {
                answer = false;
                break;
            }
            if (stack[top--] != '(') {
                answer = false;
                break;
            }
        }
    }

    if (top != -1)
        answer = false;

    free(stack);
    return answer;
}