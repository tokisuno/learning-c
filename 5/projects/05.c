#include <stdio.h>

int main(void)
{
  float income;
  printf("State your taxable income: ");
  scanf("%f", &income);

  if (income < 750.0f) {
    printf("Tax due: %.2f\n", income * 1.1f);
  } else if (income >= 750.0f && income <= 2250.0f) {
    printf("Tax due: %.2f\n", 7.50 + (income * 0.02f));
  } else if (income >= 2250.0f && income <= 3750.0f) {
    printf("Tax due: %.2f\n", 37.50f + (income * 0.03f));
  } else if (income >= 3750.0f && income <= 5250.0f) {
    printf("Tax due: %.2f\n", 82.50f + (income * 0.04f));
  } else if (income >= 5250.0f && income <= 7000.0f) {
    printf("Tax due: %.2f\n", 142.50f + (income * 0.05f));
  } else {
    printf("Tax due: %.2f\n", 230.0f + (income * 0.06f));
  }

  return 0;
}
