#include <stdio.h>

int main(void)
{
    int T, V, E, F;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &V, &E);
        F = 2 - V + E;
        printf("%d\n", F);
    }
}