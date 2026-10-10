#include <stdio.h>
#include <math.h>

int main(void)
{
  int inpNumber;

  printf("Enter a positive number >> ");
  scanf("%d", &inpNumber);

  printf("sqrt\t\t: %.4f\n", sqrt(inpNumber));
  printf("pow(x, 0.5)\t: %.4f\n", pow(inpNumber, 0.5));
  printf("cube root\t: %.4f\n", pow(inpNumber, 1.0 / 3.0));
  printf("fifth root\t: %.4f\n", pow(inpNumber, 0.2));

  return (0);
}
