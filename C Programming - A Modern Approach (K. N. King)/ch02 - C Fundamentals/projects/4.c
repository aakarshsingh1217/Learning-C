#include <stdio.h>

int main(int argc, char* argv[])
{
    float amt;

    printf("Enter an amount: ");
    scanf("%f", &amt);
    float new_amt = amt + (amt * 0.05f);
    printf("With tax added: %.2f\n", new_amt);

    return 0;
}