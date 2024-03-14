// * I had no idea how to write this so I found a solution online
// * This just runs through howevery many numbers are in the loop
// * I have 0 clue how to do this otherwise without arrays

#include <stdio.h>

int main(void)
{
  int num; 
  int rev_num = 0;
  
  printf("Enter two-digit number: ");
  scanf("%d", &num);

  while (num != 0)
  {
    rev_num = rev_num * 10  + (num % 10);
    num = num / 10;
  }
  printf("Reversed number: %d\n", rev_num);

  return 0;
}
