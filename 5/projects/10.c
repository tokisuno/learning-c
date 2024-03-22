#include <stdio.h>

int main(void)
{
  int x, ten;

  printf("Enter numerical grade: ");
  scanf("%d", &x);

  ten = (x / 10) % 10;

  if (x > 100 || x < 0) {
    printf("Invalid number\n");
  } else if (x == 100){
    printf("Perfect\n");
  } else {
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
      default:
        printf("F\n");
        break;
    }
  }
  

  return 0;
}
