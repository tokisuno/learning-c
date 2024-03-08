// Horner's rule
// Reduces amount of multiplication which frees resources

#include <stdio.h>

int main(void)
{
  int user_input;
  printf("Enter value for X: ");
  scanf("%d", &user_input);

  printf("Value: %d\n",
    ((((3 * user_input + 2) * user_input - 5) * user_input - 1) * user_input + 7) * user_input - 6);

  return 0;
}

