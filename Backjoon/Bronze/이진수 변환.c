#include <stdio.h>

void cng (unsigned long long N);

int main()
{
    unsigned long long N;
    scanf("%llu", &N);
    cng (N);
}

void cng (unsigned long long N)
{
    if (N > 1)
        cng (N/2);
    printf("%llu", N % 2);
}