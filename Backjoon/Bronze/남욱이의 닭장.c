#include <stdio.h>

int main()
{
    int T, i, N, M, X, O;

    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        scanf("%d %d", &N, &M);

        X = M - (N - M);
        O = N - M;

        printf("%d %d\n", X, O);
    }
}