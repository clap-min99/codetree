#include <stdio.h>

int main() {
    // Please write your code here.
    char str[10];
    int i;
    for (i=0; i<10; i++) {
        scanf("%c ", &str[i]);
    }
    
    for (i=9; i>=0; i--){
        printf("%c", str[i]);
    }
    
    return 0;
}