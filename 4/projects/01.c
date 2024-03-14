#include <stdio.h>

int main(void)
{
  int num;
  
  printf("Enter a two-digit number: ");
  scanf("%d", &num);
  
  // For the first digit, take the remainder of the digit by 10, this gives the last digit since 8 is the remainder of 28 when 28 % 10
  // For the second, since you're dividing an int, it'll round down to the main int. So int 2.8 returns 2.
  printf("The reversal is: %d%d\n", num % 10, num / 10 );

  return 0;
}
