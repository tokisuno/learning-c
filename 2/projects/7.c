#include <stdio.h>

int main(void)
{
  int count_20 = 0; 
  int count_10 = 0;
  int count_5 = 0;
  int count_1 = 0;
  int user_input;
  int tmp; 

  printf("Please provide dollar amount: ");
  scanf("%d", &user_input);
  
  tmp = user_input;

  while (tmp > 0) {
    if (tmp % 20 == 0) {
      count_20++;
      tmp -= 20;
    } else if (tmp % 10 == 0) {
      count_10++;
      tmp -= 10;
    } else if (tmp % 5 == 0) {
      count_5++;
      tmp -= 5;
    } else if (tmp % 1 == 0) {
      count_1++;
      tmp -= 1;
    }
  };

  printf("$20 Bills: %d\n", count_20);
  printf("$10 Bills: %d\n", count_10);
  printf("$5 Bills:  %d\n", count_5);
  printf("$1 Bills:  %d\n", count_1);
   
  return 0;
}
