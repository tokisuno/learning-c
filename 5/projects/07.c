// https://github.com/fordea/c-programming-a-modern-approach/blob/master/ch05/Projects/07.c
//
// took from this because i don't understand how to do this without sorting
//
// update: nvm i thought you were supposed to sort the integers, not just find the biggest and smallest integers.... oops

#include <stdio.h>

int main(void)
{
  int i1, i2, i3, i4, largest, smallest;
  printf("Enter 4 integers: "); 
  scanf("%2d %2d %2d %2d", &i1, &i2, &i3, &i4);
  
  if (i1 >= i2) {
    largest = i1;
    smallest = i2;
  } else {
    smallest = i1;
    largest = i2;
  }

  if (i3 > largest) {
    largest = i3; 
  } else if (i3 < smallest) {
    smallest = i3;
  }

  if (i4 > largest) {
    largest = i4; 
  } else if (i4 < smallest) {
    smallest = i4;
  }
  
  printf("Largest: %d\nSmallest: %d\n", largest, smallest);
  
  return 0;
}
