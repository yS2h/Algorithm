#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b);

int main() {
    int A, B, size, i, count = 0;
    scanf("%d %d", &A, &B);
    size = A + B;
    int *arr = (int *)malloc(sizeof(int) * size);

    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    qsort(arr, size, sizeof(int), compare);

    for (i = 0; i < size; i++)
        if (arr[i] == arr[i - 1])
            count += 2;

    printf("%d", size - count);
}

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}