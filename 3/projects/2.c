#include <stdio.h>

int main(void)
{
  int item_number;
  float unit_price;
  int day, month, year;
  printf("Enter item number: ");
  scanf("%d", &item_number);
  printf("Enter unit price: ");
  scanf("%f", &unit_price);
  printf("Enter purchase date: ");
  scanf("%d/%d/%d", &day, &month, &year);
  
  // item_number & date: left-just
  //         unit_price: right-just
  
  printf("Items     Unit      Purchase\n");
  printf("          price     date    \n");
  printf("%-8d$%6.2f%7d/%-d/%-d\n", 
      item_number, unit_price, day, month, year);


  return 0;
}
