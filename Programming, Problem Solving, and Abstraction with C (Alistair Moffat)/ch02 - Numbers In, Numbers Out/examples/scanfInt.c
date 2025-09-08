#include <stdio.h>

int main(void)
{
    int n_pass, class_size, pass_percent;
    double mass, velocity, force;

    scanf("%d%d", &n_pass, &class_size);
    scanf("%lf%lf%lf", &mass, &velocity, &force);

    printf("n_pass: %d, class_size: %d\n", n_pass, class_size);
    printf("mass: %.1f, velocity: %.1f, force: %.1f\n", mass, velocity, force);

    return 0;
}