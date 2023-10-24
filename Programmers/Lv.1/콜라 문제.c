#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int n) {
    int answer = 0;
    int left = 0;
    while (n >= a) {
        answer += n / a * b;
        n = n - n / a * a + n / a * b;
    }
    return answer;
}