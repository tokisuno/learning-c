#include <stdio.h>

int main(void)
{
  int hours, minutes;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  if (hours < 12) {
    printf("Converted time: %d:%d\n", hours, minutes);
  } else if (hours > 12) {
    printf("Converted time: %d:%dPM\n", hours - 12, minutes);
  } else {
    printf("Converted time: %d:%d\n", hours, minutes);
  }


  return 0;
}
