// only doing this in C99, as outside of the book 
// I don't think I'd be using anything older than this

#include <stdio.h>

int main(void)
{
  int i = 8 % 5;
  printf("%d\n", i);
  
  int j = -8 % 5;
  printf("%d\n", j);

  int x = 8 % -5;
  printf("%d\n", x);

  int y = -8 % -5;
  printf("%d\n", y);
  return 0;
}
