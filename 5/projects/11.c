#include <stdio.h>

int main(void)
{
  int x, ten, one;

  printf("Enter a two-digit number: ");
  scanf("%d", &x);

  if (x < 10 || x > 99) {
    printf("NOT A TWO-DIGIT NUMBER!\n");
    return 0;
  }

  one = x % 10;
  ten = (x / 10) % 10;

  printf("You've entered the number: ");
  
  if (ten == 1) {
    switch (one) {
      case 0: printf("ten"); break;
      case 1: printf("eleven"); break;
      case 2: printf("twelve"); break;
      case 3: printf("thirteen"); break;
      case 4: printf("fourteen"); break;
      case 5: printf("fifteen"); break;
      case 6: printf("sixteen"); break;
      case 7: printf("seventeen"); break;
      case 8: printf("eighteen"); break;
      case 9: printf("nineteen"); break;
    }
    printf(".\n");
  } else {
    switch(ten) {
      
      case 2: printf("twenty"); break;
      case 3: printf("thirty"); break;
      case 4: printf("forty"); break;
      case 5: printf("fifty"); break;
      case 6: printf("sixty"); break;
      case 7: printf("seventy"); break;
      case 8: printf("eighty"); break;
      case 9: printf("ninety"); break;
    }
    if (one != 0){
      printf("-");
      switch (one) {
      case 1: printf("one"); break;
      case 2: printf("two"); break;
      case 3: printf("three"); break;
      case 4: printf("four"); break;
      case 5: printf("five"); break;
      case 6: printf("six"); break;
      case 7: printf("seven"); break;
      case 8: printf("eight"); break;
      case 9: printf("nine"); break;
      }
    } 
    printf(".\n");
  }

  return 0;
}
