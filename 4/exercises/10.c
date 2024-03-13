#include <stdio.h>

int main(void)
{
  int i, j;

  //(A)
  i = 6;
  j = i += i;
  printf("%d %d\n", i, j);

  //(B)
  i = 5;
  j = (i -= 2) + 1;
  printf("%d %d\n", i, j);

  //(C)
  // i = 7;
  // j = 6 + (i = 2.5); // what in the type fuck
  // printf("%d %d", i, j);

  //(D)
  // i = 2; j = 8;
  // j = (i = 6) + (j = 3); // multiple unsequenced changes
  // printf("%d %d", i, j);
  return 0;
}
