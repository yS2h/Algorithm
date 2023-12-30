#include <stdio.h>

int main(void)
{
    char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
    char find[101];
    int i = 0, j = 0, len = 0;
    scanf ("%s", find);

    int location[26];
    for (i = 0; i < 26; i++)
    {
        location[i] = -1;
    }

    for (i = 0; find[i] != '\0'; i++)
    {
        len += 1;
    }

    for (i = 0; i < len; i++)
    {
        for (j = 0; j < 26; j++)
        {
            if (find [i] == alphabet [j])
            {
                if (location[j] == -1)
                    location[j] = i;
            }
        }
    }
    for (i = 0; i < 26; i++)
    {
        printf("%d ", location[i]);
    }

    return 0;
}