#include <stdio.h>
#include <math.h>

int main(void)
{
  double principal, rate, numYears;

  printf("Enter principal >> ");
  scanf("%lf", &principal);
  printf("Enter interest rate >> ");
  scanf("%lf", &rate);
  printf("Enter number of years >> ");
  scanf("%lf", &numYears);

  double finalAmount = principal * pow((1 + (rate / 100.0)), numYears);

  printf("Principal\t: %.2f\n", principal);
  printf("Final Amount\t: %.2f\n", finalAmount);
  printf("Interest Amount\t: %.2f\n", finalAmount - principal);

  return (0);
}
