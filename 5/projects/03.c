#include <stdio.h>

int main(void)
{
  int shares;
  float commission, 
        price, 
        value, 
        rival_commission;

  printf("Enter # of shares: ");
  scanf("%d", &shares);

  printf("Enter value per share: ");
  scanf("%f", &price);

  value = shares * price;
  printf("\n");
  if (value < 2500.00f) {
    printf("Commission: $%0.2f\n", commission = 30.00f + .017f * value);
  } else if (value < 6250.00f) {
    printf("Commission: $%0.2f\n", commission = 56.00f + .0066f * value);
  } else if (value < 20000.00f) {
    printf("Commission: $%0.2f\n", commission = 76.00f + .0034f * value);
  } else if (value < 50000) {
    printf("Commission: $%0.2f\n", commission = 100.00f + .0022f * value);
  } else if (value < 500000.00f) {
    printf("Commission: $%0.2f\n", commission = 155.00f + .0011f * value);
  } else {
    printf("Commission: $%0.2f\n", commission = 255.00f + .0009f * value);
  }

  printf("---\n");

  if (shares < 2000) {
    printf("Rival commission: $%0.2f\n", rival_commission = 33.00f + .03f * shares);
  } else {
    printf("Rival commission: $%0.2f\n", rival_commission = 33.00f + .02f * shares);
  }

  if (commission < 39.00f) {
    commission = 39.00f;
  }

  return 0;
}
