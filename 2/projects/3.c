#include <math.h>
#include <stdio.h>
#define PI 3.14159

int main(void)
{
    int user_input;
    printf("Enter radius of sphere: ");
    scanf("%d", &user_input);

    printf("Volume of sphere: %f\n", (4.0f/3.0f) * PI * pow(user_input, 3));
    return 0;
}
