#include <stdio.h>

int main() {
    int N, x, y, i, j, k, sum = 0;
    int paper[100][100] = {0, };

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d %d", &x, &y);
        for (j = x; j < x + 10; j++)
            for (k = y; k < y + 10; k++)
                paper[j][k] = 1;
    }

    for (i = 0; i < 100; i++)
        for (j = 0; j < 100; j++)
            if (paper[i][j] == 1)
                sum++;

    printf("%d", sum);
    return 0;
}