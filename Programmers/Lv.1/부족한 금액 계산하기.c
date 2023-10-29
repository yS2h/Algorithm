#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long long answer = 0;
    for (int i = 1; i <= count; i++) {
        answer += i * price;
    }
    answer -= money;
    if (answer < 0)
        answer = 0;

    return answer;
}