#include <stdio.h>

int main(void)
{
  int i = 17;
  printf("%d\n", i >= 0 ? i : -i);

  // if i is greater than or equal to 0, i = i
  // else i = -i
  // if i = -17, output = 17

  return 0;
}
