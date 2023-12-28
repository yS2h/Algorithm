#include <stdio.h>
#include <string.h>

int main(void)
{
    char OX[80];
    int i, j, n = 0, score, sum;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        sum = 0;
        score = 0;
        scanf("%s", OX);

        for (j = 0; j < strlen(OX); j++)
        {
            if (OX[j] == 'O')
            {
                score += 1;
                sum += score;
            }
            else
                score = 0;
        }
        printf("%d\n", sum);
    }
}