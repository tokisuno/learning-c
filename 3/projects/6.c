#include <stdio.h>

int main(void)
{
  int num1, denom1, num2, denom2, top, bottom; 
  printf("Enter Equation (ex. X/Y+A/B): ");
  scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

  top = num1 * denom2 + num2 * denom1;
  bottom = denom1 * denom2;
  printf("The sum of %d/%d\n", top, bottom);

  return 0;
}
