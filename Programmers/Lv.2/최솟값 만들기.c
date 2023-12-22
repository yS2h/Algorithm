#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int ascending(const void* a, const void* b);
int descending(const void* a, const void* b);

int solution(int A[], size_t A_len, int B[], size_t B_len) {
    int answer = 0;
    qsort(A, A_len, sizeof(int), ascending);
    qsort(B, B_len, sizeof(int), descending);

    for (int i = 0; i < A_len; i++)
        answer += A[i] * B[i];

    return answer;
}

int ascending(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int descending(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}