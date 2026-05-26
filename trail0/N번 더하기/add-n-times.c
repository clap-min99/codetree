#include <stdio.h>

int main() {
    // Please write your code here.
    int A, N, i;
    scanf("%d %d", &A, &N);
    int ans = A;
    for (i = 0; i < N; i ++) {
        ans += N;
        printf("%d\n", ans);
    }
    return 0;
}