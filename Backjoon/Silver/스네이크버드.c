#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b);

int main() {
    int N, L, i;
    scanf("%d %d", &N, &L);
    int* arr = (int *)malloc(sizeof(int) * N);
    for (i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    qsort(arr, N, sizeof(int), compare);
    for (i = 0; i < N; i++)
        if (L >= arr[i])
            L++;
    printf("%d", L);
    free(arr);
    return 0;
}

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}