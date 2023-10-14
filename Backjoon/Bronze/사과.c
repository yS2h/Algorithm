#include <stdio.h>

int main(void)
{
    int N, s, a, r, sum = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &s, &a);
        r = a % s;
        sum += r;
    }
    printf("%d\n", sum);
}