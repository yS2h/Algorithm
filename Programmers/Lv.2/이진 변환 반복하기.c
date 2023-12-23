#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* s) {
    int* answer = (int*)calloc(2, sizeof(int));
    int len = strlen(s);
    int cnt = 0;
    for(int i = 0; i < len; i++)
        if(s[i] == '1')
            cnt++;
    answer[0]++;
    answer[1] += len - cnt;
    len = cnt;

    while (len != 1) {
        int one = 0; int zero = 0;
        for (int i = 0; len != 0; i++) {
            if (len % 2 == 1)
                one++;
            else
                zero++;
            len /= 2;
        }
        len = one;
        answer[0]++;
        answer[1] += zero;
    }

    return answer;
}
