#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s, const char* skip, int index) {
    char* answer = (char*)malloc(sizeof(char) * (strlen(s) + 1));
    strcpy(answer, s);

    for (int i = 0; i < strlen(s); i++) {
        for (int j = 0; j < index; j++) {
            answer[i]++;
            if (answer[i] >= 123)
                answer[i] -= 26;
            for (int k = 0; k < strlen(skip); k++) {
                if (skip[k] == answer[i]) {
                    answer[i]++;
                    k = -1;
                    if (answer[i] >= 123)
                        answer[i] -= 26;
                }
            }
        }
    }
    return answer;
}