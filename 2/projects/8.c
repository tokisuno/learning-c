#include <stdio.h>

int main(void)
{
  int months = 3;
  double loan_amount = 20000.00f;
  float interest_rate; 
  double monthly_payment = 386.66f;
  double result;
  result = loan_amount;

  printf("Input your monthly interest rate: ");
  scanf("%f", &interest_rate);
  
  interest_rate /= 100;
  
  while (months > 0)
  {
    result -= monthly_payment;
    result += (result * (interest_rate / 12));
    printf("Balance remaining after payment: %-.02f\n", result);
    months--;
  }
  
  return 0;
}
