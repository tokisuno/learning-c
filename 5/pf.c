#include <stdio.h>

int main(void)
{
  int grade = 1;

  switch (grade) {
    case 4: case 3: case 2: case 1:
            printf("Passing\n");
            break;
    case 0: printf("Failing\n"); 
            break;
    default: printf("Illegal grade\n");
             break;
      
  }

  return 0;
}
