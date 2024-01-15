#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, i, j, k, size = 1;
    scanf("%d %d", &N, &M);
    int arr[50][50];

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            scanf("%1d", &arr[i][j]);

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            for (k = 1; k < min(N, M) && k + i < N && k + j < M; k++)
                if (arr[i][j] == arr[i + k][j] && arr[i][j] == arr[i][j + k] && arr[i][j] == arr[i + k][j + k])
                    size = max(size, k + 1);

    printf("%d", size * size);

    return 0;
}