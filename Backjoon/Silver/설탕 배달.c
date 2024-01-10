#include <stdio.h>

int main()
{
    int N, cnt = 0, end = 0, share = 0;
    scanf("%d", &N);

    if (N % 5 == 0)
        cnt = N / 5;
    else
    {
        while (N != 0)
        {
            share += 1;
            N -= 3;
            if (N % 5 == 0)
            {
                cnt = share + N / 5;
                break;
            }
            else if (N < 0)
            {
                cnt = -1;
                break;
            }
        }
        if (N == 0)
            cnt = share;
    }
    printf("%d", cnt);
}