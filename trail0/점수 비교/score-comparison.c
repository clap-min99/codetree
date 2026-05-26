#include <stdio.h>

int main() {
    // Please write your code here.
    int math_A, math_B, eng_A, eng_B;
    scanf("%d %d", &math_A, &eng_A);
    scanf("%d %d", &math_B, &eng_B);

    if (math_A > math_B && eng_A > eng_B) {
        printf("1");
    } 
    else {
        printf("0");
    }
    }