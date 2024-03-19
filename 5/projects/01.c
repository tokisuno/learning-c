#include <stdio.h>

int main(void)
{
  int i;

  printf("Enter a number: ");
  scanf("%d", &i);

  if (i >= 0 && i <= 9) {
    printf("1 digit\n");
  } else if (i >= 10 && i <= 99) {
    printf("2 digit\n");
  } else {
    printf("3 digit\n");
  }

  return 0;
}
