#include <stdio.h>
#include <math.h>

typedef struct
{
    double x;
    double y;
} vector_t;

double distance
(
    vector_t p1, 
    vector_t pt2
);

int main(int argc, char *argv[])
{
    vector_t p1 = {10.5, 12.5};
    vector_t p2 = {15.5, 30.5};

    printf("Distance between points: %.2f\n", 
           distance(p1, p2));

    return 0;
}

double distance(vector_t p1, vector_t p2)
{
    return sqrt
           (
                pow(p1.x - p2.x, 2) + 
                pow(p1.y - p2.y, 2)
           );
}
