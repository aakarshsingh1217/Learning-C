#include <stdio.h>
#include <stdlib.h>

#define RATE0 0.000
#define RATE1 0.190
#define RATE2 0.325
#define RATE3 0.370
#define RATE4 0.450
#define RATEM 0.015

#define THRESH1 18200.00
#define THRESH2 37000.00
#define THRESH3 80000.00
#define THRESH4 180000.00

#define BASE0 0.00
#define BASE1 (BASE0 + RATE0 * THRESH1)                         // = 0
#define BASE2 (BASE1 + RATE1 * (THRESH2 - THRESH1))             // = 3572.00
#define BASE3 (BASE2 + RATE2 * (THRESH3 - THRESH2))             // = 17547.00
#define BASE4 (BASE3 + RATE3 * (THRESH4 - THRESH3))             // = 54547.00

int main(void) {
    double gross, tax, medicare, net;

    printf("Enter gross salary: $");
    if (scanf("%lf", &gross) != 1) {
        printf("No value was entered\n");
        exit(EXIT_FAILURE);
    }

    if (gross <= THRESH1) {
        tax = BASE0 + gross * RATE0;
    } else if (gross <= THRESH2) {
        tax = BASE1 + (gross - THRESH1) * RATE1;
    } else if (gross <= THRESH3) {
        tax = BASE2 + (gross - THRESH2) * RATE2;
    } else if (gross <= THRESH4) {
        tax = BASE3 + (gross - THRESH3) * RATE3;
    } else {
        tax = BASE4 + (gross - THRESH4) * RATE4;
    }

    medicare = RATEM * gross;
    net = gross - tax - medicare;
    printf("Net income: $%9.2f\n", net);

    return 0;
}
