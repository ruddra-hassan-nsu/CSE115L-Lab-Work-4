#include <stdio.h>
#include <math.h>

int main(void)
{
  double x1, x2, y1, y2;

  printf("Enter x1 and y1 >> ");
  scanf("%lf, %lf", &x1, &y1);
  printf("Enter x2 and y2 >> ");
  scanf("%lf, %lf", &x2, &y2);

  double dx = x2 - x1;
  double dy = y2 - y1;

  double distance = sqrt(pow(dx, 2) + pow(dy, 2));
  int whole_distance = (int)ceil(distance);

  printf("Horizontal distance; ignoring distance is: %.1f\n", fabs(dx));
  printf("The distance is %.3f metres.\n", distance);
  printf("You must buy %d metres of rope.\n", whole_distance);

  return (0);
}
