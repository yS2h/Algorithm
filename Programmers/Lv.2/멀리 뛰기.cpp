#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    int arr[2001] = {1, 1, };
    for(int i = 2; i <= n; i++)
        arr[i] = (arr[i - 1] + arr[i - 2]) % 1234567;
    return arr[n];
}
