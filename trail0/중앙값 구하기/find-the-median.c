#include <stdio.h>

int main() {
    // Please write your code here.
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if (((A >= B) && (B >= C)) || ((C >= B) && (B >= A))) {
        printf("%d",B);
    }
    else if (((B >= A) && (A >= C)) || ((C >= A) && (A >= B))) {
        printf("%d", A);
    }
    else {
        printf("%d", C);
    }
    return 0;
}