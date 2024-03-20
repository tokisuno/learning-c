#include <stdio.h>

int main(void)
{
  int d1, m1, y1;
  int d2, m2, y2;
  
  printf("-----\n");
  printf("Enter 1st date: ");
  scanf("%d /%d /%d", &m1, &d1, &y1);
  printf("-----\n");
  printf("Enter 2nd date: ");
  scanf("%d/%d/%d", &m2, &d2, &y2);

  if (y2 > y1) {
    printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", m2, d2, y2, m1, d1, y1);
  } else if (y2 > y1 && m2 > m1) {
    printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", m2, d2, y2, m1, d1, y1);
  } else if (y2 >= y1 && m2 >= m1 && d2 > d1) {
    printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", m2, d2, y2, m1, d1, y1);
  } else {
    printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", m1, d1, y1, m2, d2, y2);
  }

  return 0;
}
