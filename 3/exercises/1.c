#include <stdio.h>

int main(void)
{
  printf("%6d,%4d\n", 86, 1040);
  // right-just 6 chars total, left-just 4 chars total
  printf("%12.5e\n", 30.253);
  // right-just 12 chars, rounding to 5th sigdig in exp-form
  printf("%.4f\n", 83.162);
  // right-just no limit or spacing on chars, but return 4 sigdigs
  printf("%-6.2g\n", 0.0000009979);
  // left-just 6 digits total, g decides on exp-form, only return 2 sigdigs

  return 0;
}
