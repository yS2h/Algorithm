#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, i, answer = 0;
    int arr1[2000001] = {0, };
    scanf("%d", &n);
    int *arr2 = new int [n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
        arr1[arr2[i]] = 1;
    }

    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (arr2[i] < x and arr1[x-arr2[i]])
            answer++;
    }
    delete[]arr2;

    printf("%d", answer / 2);
    return 0;
}