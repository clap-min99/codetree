#include <stdio.h>

int main() {
    // Please write your code here.
    int gender, age;
    scanf("%d %d", &gender, &age);
    if (gender == 0) {
        if (age < 19) {
            printf("BOY");
        }
        else {
            printf("MAN");
        }
        
    }
    else if (gender == 1) {
        if (age < 19) {
            printf("GIRL");
        }
        else {
            printf("WOMAN");
        }
        
    } 
    return 0;
}