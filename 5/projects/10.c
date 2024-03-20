#include <stdio.h>

int main(void)
{
  int x, ten;

  printf("Enter numerical grade: ");
  scanf("%d", &x);

  ten = (x / 10) % 10;

  switch (ten) {
    case 9: 
      printf("A\n");
      break;
    case 8:
      printf("B\n");
      break;
    case 7:
      printf("C\n");
      break;
    case 6:
      printf("D\n");
      break;
    case 5: case 4: case 3: case 2: case 1: case 0:
      printf("F\n");
      break;
    default:
      printf("Perfect");
  }

  if (x == 100)

  return 0;
}
