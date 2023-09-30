#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    char* answer = (char*)malloc(5);
    if (num % 2 == 0)
        answer = "Even";
    else
        answer = "Odd";
    return answer;
}