#include <stdio.h>
#include <string.h>

#define PLANETSTRLEN 20

typedef char pstr_t[PLANETSTRLEN + 1];

typedef struct
{
    pstr_t name, orbits;
    double distance;
    double mass;
    double radius;
} planet_t;

int main(int argc, char *argv[])
{
    planet_t one_planet =
        {"Earth", "Sun", 149.6, 5.9736e+24, 6738.1};
    planet_t another_planet =
        {"Moon", "Earth", 0.3844, 7.349e+22, 1738.1};

    one_planet = another_planet;

    printf("one_planet.name: %s\n", one_planet.name);

    return 0;
}