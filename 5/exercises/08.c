#include <stdio.h>

int main(void)
{
  int age;

  printf("Enter age: ");
  scanf("%d", &age);

  (age >= 13 && age <= 19) ? printf("Is a teenager\n") : printf("Isn't a teenager\n");

  return 0;
}
