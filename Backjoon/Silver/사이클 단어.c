#include <stdio.h>
#include <string.h>

int compareWords(char* word1, char* word2);

int main() {
    int N, i, j, num = 0;
    char input[51];
    char w[50][51];

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%s", input);
        for (j = 0; j < num; j++)
            if (compareWords( w[j], input))
                break;
        if (j == num || i == 0) {
            strcpy(w[num], input);
            num++;
        }
    }
    printf("%d", num);

    return 0;
}

int compareWords(char* word1, char* word2) {
    if (strlen(word1) != strlen(word2))
        return 0;

    char word[2 * strlen(word2) + 1];
    strcpy(word, word2);
    strcat(word, word2);

    if (strstr(word, word1) != NULL)
        return 1;

    return 0;
}