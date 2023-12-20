#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b);

int solution(int k, int tangerine[], size_t tangerine_len) {
    qsort(tangerine, tangerine_len, sizeof(int), compare);
    int *count = (int *)calloc(tangerine[0] + 1, sizeof(int));
    int answer = 0;

    for (int i = 0; i < tangerine_len; i++) {
        ++count[tangerine[i]];
    }

    qsort(count, tangerine[0] + 1, sizeof(int), compare);

    while (k > 0)
        k -= count[answer++];

    free(count);
    return answer;
}

int compare(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}