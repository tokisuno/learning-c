#include <iso646.h>
#include <stdio.h>

int main(void)
{
  int hours, minutes, mid_mins;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  mid_mins = (hours * 60) + minutes;

  if (mid_mins <= (8 * 60)) {
    printf("Closest departure time is 8:00am, arriving @ 10:16am\n");
  } else if (mid_mins < (9 * 60) + 43) {
    printf("Closest departure time is 9:43am, arriving @ 11:52am\n");
  } else if (mid_mins < (11 * 60) + 19) {
    printf("Closest departure time is 11:19am, arriving @ 1:31pm\n");
  } else if (mid_mins < (12 * 60) + 47) {
    printf("Closest departure time is 12:47pm, arriving @ 3:00pm\n");
  } else if (mid_mins < (14 * 60)) {
    printf("Closest departure time is 2:00pm, arriving @ 4:08pm\n");
  } else if (mid_mins < (15 * 60) + 45) {
    printf("Closest departure time is 3:45pm, arriving @ 5:55pm\n");
  } else if (mid_mins < (19 * 60)) {
    printf("Closest departure time is 7:00pm, arriving @ 9:20pm\n");
  } else {
    printf("Closest departure time is 9:45pm, arriving @ 11:58pm\n");
  }
  
  return 0;
}
