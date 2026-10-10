#include <stdio.h>
#include <math.h>

int main(void)
{
  double inpNumber;
  int inpInteger;

  printf("Enter a positive number >> ");
  scanf("%lf", &inpNumber);
  printf("Enter a positive integer >> ");
  scanf("%d", &inpInteger);

  printf("(a): %.4f\n", floor(inpNumber * 100 + 0.5) / 100);
  printf("(b): %d\n", (int)(floor(log10(inpInteger)) + 1));

  return (0);
}
