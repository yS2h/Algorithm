#include <stdio.h>

int main (void)
{
    int num[11];
    int i, j, rest, count = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &rest);
        num[i] = rest % 42;
    }

    for (i = 0; i < 10; i++)
    {
        rest = 0;
        for (j = i + 1; j < 10; j++)
        {
            if (num[i] == num[j])
                rest ++;
        }
        if (rest == 0)
            count ++;
    }


    printf("%d", count);

    return 0;
}