#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int fibonacci(int n) {
    int a = 0, b = 1, c;

    for (int i = 2; i <= n; i++) {
        c = (a + b) % 1234567;
        a = b;
        b = c;
    }
    return c;
}

int solution(int n) {
    int answer = 0;
    answer = fibonacci(n);
    return answer;
}