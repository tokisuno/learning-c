#include <stdio.h>

int main(void)
{
  int day, month, year;
  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &day, &month, &year);
  printf("You entered the date: %d%02d%02d\n", year, month, day);

  return 0;
}
