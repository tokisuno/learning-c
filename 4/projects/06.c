#include <stdio.h>


int main(void)
{
  int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12; 
  int evens, odds, total;
  evens = odds = 0;

  printf("Insert 12 digit EAN code: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", 
      &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);
   
  evens = i2 + i4 + i6 + i8 + i10 + i12;
  printf("%d\n", evens);
  odds = i1 + i3 + i5 + i7 + i9 + i11;
  printf("%d\n", odds);
  
  printf("%d\n", ((evens * 3) + odds - 1) % 10);
  total = 9 - ((((evens * 3) + odds) - 1) % 10);
  printf("Check digit: %d\n", total);

  return 0;
}
