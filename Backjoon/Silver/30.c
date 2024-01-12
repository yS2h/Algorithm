#include <stdio.h>
#include <string.h>

int main() {
    char N[100001];
    scanf("%s", N);
    int i, j, len = strlen(N), sum = 0, sort[10] = {0};

    for (i = 0; i < len; i++) {
        sum += N[i];
        sort[(int)N[i]-48] += 1;
    }

    if (sort[0] != 0 && sum % 3 == 0) {
        for (i = 9; i > -1; i--)
            if(sort[i] != 0)
                for(j = 0; j < sort[i]; j++)
                    printf("%d", i);
    }
    else
        printf("-1");

    return 0;
}