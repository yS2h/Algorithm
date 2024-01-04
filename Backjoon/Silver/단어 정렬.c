#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

typedef struct {
    int len;
    char word[MAX];
}WORD;

int compare(const void* a, const void* b);

int main() {
    int N, i;
    scanf("%d", &N);
    WORD *w = (WORD*)malloc(sizeof(WORD) * N);

    for (i = 0; i < N; i++) {
        scanf("%s", w[i].word);
        w[i].len = strlen(w[i].word);
    }

    qsort(w, N, sizeof(WORD), compare);

    for (i = 0; i < N; i++) {
        if (strcmp(w[i].word, w[i - 1].word) == 0)
            continue;
        printf("%s\n", w[i].word);
    }

    return 0;
}

int compare(const void* a, const void* b) {
    if (((WORD*)a)->len == ((WORD*)b)->len) {
        return strcmp(((WORD*)a)->word, ((WORD*)b)->word);
    } else {
        return ((WORD*)a)->len - ((WORD*)b)->len;
    }
}