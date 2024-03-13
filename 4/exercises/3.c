// only doing this in C99, as outside of the book 
// I don't think I'd be using anything older than this

#include <stdio.h>

int main(void)
{
  float i = 8.0 / 5.0;
  printf("%f\n", i);
  
  float j = -8.0 / 5.0;
  printf("%f\n", j);

  float x = 8.0 / -5.0;
  printf("%f\n", x);

  float y = -8.0 / -5.0;
  printf("%f\n", y);
  return 0;
}
