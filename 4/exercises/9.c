#include <stdio.h>

int main(void)
{
  //(A)
  int i = 7;
  int j = 8;
  i *= j + 1;
  printf("%d %d\n", i, j);
  // output: 63 8
  // j + 1 runs to make 9, and then returns 7 * 9. i equals i * the result of j + 1.

  //(B)
  int k;
  i = j = k = 1;
  i += j += k;
  printf("%d %d %d\n", i, j, k);
  // output: 3 2 1 
  // 1 + 1 = 2 + 1 = 3

  //(C)
  i = 1; j = 2; k = 3;
  i -= j -= k;
  printf("%d %d %d\n", i, j, k);
  // output: 2 -1 3
  // 2: i = (i - j) + (j - k) == i = -1 -(-1) = 2
  //-1: j = j - k = -1 
  // 3: k = 3 (no calculations)
  

  //(D)
  i = 2; j = 1; k = 0;
  i *= j += k;
  printf("%d %d %d\n", i, j, k);
  // output: 2 1 0
  return 0;
}
