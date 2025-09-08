#include <math.h>

#define MAXPOINTS 100

typedef struct
{
    double x;
    double y;
} point_t;

typedef struct
{
    int n_points;
    point_t points[MAXPOINTS];
} poly_t;

double distance(point_t a, point_t b);
double perimeter(poly_t p);
double area(poly_t p);

double area(poly_t p)
{
    if (p.n_points < 3)
    {
        return 0.0; // not a polygon
    }

    double acc = 0.0;
    
    for (int i = 0; i < p.n_points; ++i) {
        point_t current = p.points[i];
        point_t next = p.points[(i + 1) % p.n_points]; // wrap to first
        acc += current.x * next.y - current.y * next.x; // xi*yi+1 - yi*xi+1
    }

    return 0.5 * fabs(acc);
}

double perimeter(poly_t p)
{
    int i;
    double total = 0.0;

    for (i = 0; i < p.n_points; i++)
    {
        point_t current = p.points[i];
        point_t next = p.points[(i + 1) % p.n_points];
        total += distance(current, next);
    }

    return total;
}

double distance(point_t a, point_t b) 
{
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt(dx*dx + dy*dy);
}
