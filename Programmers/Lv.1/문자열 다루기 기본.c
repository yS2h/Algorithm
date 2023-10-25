#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(const char* s) {
    if (strlen(s) != 4 && strlen(s) != 6)
        return false;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] > 64)
            return false;
    }
    return true;
}