#include <stdio.h>

int main(void)
{
  //(A)
  int i = 5;
  int j = 3;
  printf("%d %d\n", i / j, i % j); // 1 2
  //(B)
  int a = 2;
  int b = 3;
  printf("%d\n", (a + 10) % b); // 0
  //(C)
  int x = 7;
  int y = 8;
  int z = 9;
  printf("%d\n", (x + 10) % z / y); // 1
  //(D)
  int e = 1;
  int r = 2;
  int t = 3;
  printf("%d\n", (e + 5) % (r + 2) / t); // 0

  return 0;

  //2. they'll return the same negative result either way 

}
