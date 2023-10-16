#include <stdio.h>

int main()
{
    int H, M;
    scanf("%d %d", &H, &M);
    H *= 60;

    int time = (H + M) - 45;
    int alarmH = time / 60;
    int alarM = time - (alarmH * 60);

    if (alarM>=60)
    {
        alarM -= 60;
        alarmH +=1;
    }
    else if (alarM<0)
    {
        alarM += 60;
        alarmH = 23;
    }

    printf("%d %d", alarmH, alarM);

    return 0;
}