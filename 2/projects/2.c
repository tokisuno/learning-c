#include <math.h>
#include <stdio.h>
#define RADIUS 10
#define PI 3.14159

int main(void)
{
    printf("Volume of sphere: %f\n", (4.0f/3.0f) * PI * pow(RADIUS, 3));
    return 0;
}
