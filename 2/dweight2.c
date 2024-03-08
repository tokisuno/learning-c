// Computes the dimensional weight of a
// box from the user input


// issue with the program:
// * doesn't work if the user doesn't input a non-numeric value
// * this is to be covered in section 3.2

#include <stdio.h>
#define INCHES_PER_POUND 166 // * preprocessing directive
                             // * value of expression can also be an expression

int main(void)
{
  int height, length, width, volume, weight;

  printf("enter height of the box: ");
  scanf("%d", &height);
  printf("enter length of the box: ");
  scanf("%d", &length);
  printf("enter width of the box: ");
  scanf("%d", &width);

  volume = height * length * width;
  weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", weight);

  return 0;
}
