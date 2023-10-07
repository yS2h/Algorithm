#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int len = 0;
    int three = 1;
    int arr[17];
    while (n) {
        arr[len++] = n % 3;
        n /= 3;
    }
    for (int i = 0; i < len; i++) {
        answer *= 3;
        answer += arr[i];
    }
    return answer;
}