#include <stdio.h>

int main(void)
{
  int a, b, c, d, e, f, g, h, i ,j, k, l, m, n, o, p;
  printf("Enter numbers from 1-16 in any order: ");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
      &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m,
      &n, &o, &p);

  printf("%d %d %d %d\n", a, c, i, j);
  printf("%d %d %d %d\n", b, d, e, h);
  printf("%d %d %d %d\n", k, p, o, l);
  printf("%d %d %d %d\n", f, m, n, g);
  printf("Row sums: %d %d %d %d\n", a+c+i+j, b+d+e+h, k+p+o+l, f+m+n+g); 
  printf("Column sums: %d %d %d %d\n", a+b+k+f, c+d+p+m, i+e+o+n, j+h+l+g); 
  printf("Diagonla sums: %d %d\n", a+d+o+g, j+e+p+f); 

  return 0;
}
