#include <stdio.h>

int main(void) {
    int n;
    int digits[5];

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n);

    for (int i = 4; i >= 0; i--) 
    {
        digits[i] = n % 8;
        n /= 8;
    }

    printf("In octal, your number is: ");

    for (int i = 0; i < 5; i++) 
    {
        printf("%d", digits[i]);
    }
    
    printf("\n");

    return 0;
}