#include<stdio.h>

int main()
{
    int i, j, N, n[1000];
    int shift;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d", &n[i]);
    }

    for (i = 0; i < N; i++)
    {
        for (int j = 0; j < N-1; j++)
        {
            if (n[j] > n[j + 1])
            {
                shift = n[j + 1];
                n[j + 1] = n[j];
                n[j] = shift;
            }
        }
    }
    for (i = 0; i < N; i++)
    {
        printf("%d\n", n[i]);
    }
    return 0;
}