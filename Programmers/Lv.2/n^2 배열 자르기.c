#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n, long long left, long long right) {
    int* answer = (int*)malloc(sizeof(int) * (right - left + 1));

    for (long long i = left; i <= right; i++) {
        long long row = i / n;
        long long col = i % n;

        if (col >= row) {
            answer[i - left] = col + 1;
        } else {
            answer[i - left] = row + 1;
        }
    }

    return answer;
}