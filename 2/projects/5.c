#include <stdio.h>
#include <math.h>

int main(void)
{
  int user_input;
  printf("Enter value for X: ");
  scanf("%d", &user_input);

  printf("Value: %-.02f\n",
      (3 * pow(user_input, 5)) + 
        (2 * pow(user_input, 4)) -
          (5 * pow(user_input, 3)) -
            pow(user_input, 2) + (7 * user_input) - 6);

  return 0;
}

