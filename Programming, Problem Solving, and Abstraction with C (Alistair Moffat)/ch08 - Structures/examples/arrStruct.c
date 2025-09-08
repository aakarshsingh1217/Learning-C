#define PLANETSTRLEN 20
#define MAXBODIES 100

typedef char pstr_t[PLANETSTRLEN + 1];

typedef struct
{
    pstr_t name;
    pstr_t orbits;
    double distance;
    double mass;
    double radius;
} planet_t;

int main(int argc, char *argv[])
{
    int nplanets = 0;
    planet_t planets[MAXBODIES];

    return 0;
}
