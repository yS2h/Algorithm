#include <stdio.h>
#include <stdlib.h>

int main() {
    int K, num, i, sum = 0, top = -1;
    scanf("%d", &K);
    int* arr = (int *)malloc(sizeof(int) * K);

    for (i = 0; i < K; i++) {
        scanf("%d", &num);
        if (num == 0)
            arr[top--];
        else
            arr[++top] = num;
    }
    for (i = 0; i <= top; i++)
        sum += arr[i];

    printf("%d", sum);
    free(arr);
    return 0;
}