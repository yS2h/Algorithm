#include <stdio.h>

int main()
{
    int i, T, N, C, day = 0;

    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        scanf("%d %d", &N, &C);

        while (N != 0)
        {
            if (N >= C)
            {
                N -= C;
                day += 1;
            }
            else
            {
                N = 0;
                day += 1;
            }
        }
        printf("%d\n", day);
        day = 0;
    }
}