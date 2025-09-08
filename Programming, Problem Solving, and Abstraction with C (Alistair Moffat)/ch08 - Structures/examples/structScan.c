#include <stdio.h>

#define PLANETPROMPT \
    "name, orbits, distance, mass, radius"
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
    planet_t new_planet;

    printf("Enter %s:\n", PLANETPROMPT);
    scanf("%s %s %lf %lf %lf",
          new_planet.name,
          new_planet.orbits,
          &new_planet.distance,
          &new_planet.mass,
          &new_planet.radius);

    printf("New planet name: %s\n", new_planet.name);

    return 0;
}
