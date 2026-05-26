#include <stdio.h>

int main() {
    // Please write your code here.
    int A, B;
    scanf("%d %d", &A, &B);
    int i;
    for (i = B; i >= A; i--) {
        printf("%d ", i);
    }
    return 0;
}