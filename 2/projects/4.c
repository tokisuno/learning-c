#include <stdio.h>
#define TAX 1.05f

int main(void)
{
  float user_input;
  printf("Enter dollar-and-cents amount: \n");
  scanf("%f", &user_input);

  printf("With tax added: %-.02f\n", user_input * TAX);
  return 0;
}
