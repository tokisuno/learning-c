#include <stdio.h>

int main(void)
{
  int num;
  int n1, n2, n3, n4, n5;


  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &num);

  n1 = n2 = n3 = n4 = n5 = 0;
  
  // first divide by 8; 
  // then continue dividing by 8 until you're done
  n5 = num % 8;
  n4 = (num / 8) % 8;
  n3 = ((num / 8) / 8) % 8;
  n2 = (((num / 8) / 8) / 8) % 8;
  n1 = ((((num / 8) / 8) / 8) / 8) % 8;

  printf("Your octal number is: %d%d%d%d%d\n", n1, n2, n3, n4, n5);
  printf("Your octal number is: %o\n", num);
  
  return 0;
}
