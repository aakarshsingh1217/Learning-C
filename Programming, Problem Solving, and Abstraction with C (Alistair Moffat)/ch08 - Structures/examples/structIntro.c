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
} planet_s;

int main(int argc, char *argv[])
{
    planet_s one_planet;
    strncpy(one_planet.name, "Earth", PLANETSTRLEN);
    strncpy(one_planet.name, "Sun", PLANETSTRLEN);
    one_planet.distance = 149.6;
    one_planet.mass = 5.9736e+24;
    one_planet.radius = 6378.1;

    planet_s the_moon =
        {"Moon", "Earth", 0.3844, 7.349e+22, 1738.1};

    return 0;
}
