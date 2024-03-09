#include <stdio.h>
#define HEIGHT 8
#define LENGTH 12
#define WIDTH 10
#define INCHES_PER_POUND 166 

int main(void)
{
  int volume = HEIGHT * LENGTH * WIDTH;
  int weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

  printf("Dimensions: %dx%dx%d\n", LENGTH, WIDTH, HEIGHT);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND);

  return 0;
}
