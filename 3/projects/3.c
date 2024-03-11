#include <stdio.h>

int main(void)
{
  // gs1 prefix, group identifier, publisher code, item number, check digit
  int gs1, gi, pc, inum, checkdig;
  printf("Enter ISBN: "); 
  scanf("%d%d%d%d%d", &gs1, &gi, &pc, &inum, &checkdig); 
  gi *= -1;
  pc *= -1;
  inum *= -1;
  checkdig *= -1;
  printf("GS1 Prefix: %d\nGroup identifier: %d\nPublisher code: %d\nTest number: %d\nCheck digit: %d\n", gs1, gi, pc, inum, checkdig);

  return 0;
}
