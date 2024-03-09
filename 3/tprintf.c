// prints ints and floats in various formats

#include <stdio.h>

int main(void)
{
  int i;
  float x;

  i = 40;
  x = 839.21f;

  // * %d displays i in decimal form, using minimum amount of space
  // * %5d displays i in decimal form, using a min of 5 chars
  //    - since i only reqs 2 chars, 3 spaces were added
  // * %-5d displays i in decimal form, but formatting is right-just instead
  // * %5.3d displays i in decimal form using a min of 5 chars and 3 nums
  //    - since i is 2 chars long, an extra 0 is added to satisfy .3
  printf("|%d|%5d|%-5d|%5.3d\n", i, i, i, i);

  // * %10.3f displays x in fixed decimal form, using 10 chars overall with 3 after the decimal mount, therefore 3 spaces precede x
  // * %10.3e displays x in exponential form, using 10 chars overall with 3 after the decimal point
  // * %-10g displays x in either fixed decimal OR exponential form, using 10 chars overall
  //    - minus sign forces left-just
  //    - must fill 10 chars overall, so printf chose to display x in fixed-decimal form
  printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

  return 0;
}
