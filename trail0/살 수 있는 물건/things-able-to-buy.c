#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    if (n>= 3000) {
        printf("book");
    }
    else if (1000<= n & n < 3000) {
        printf("mask");
    }
    else if (n < 1000){
        printf("no");
    }
    return 0;
}