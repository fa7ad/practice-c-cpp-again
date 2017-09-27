#include <stdio.h>

int main () {
  float x, y;
  printf("Enter two numbers separated by a space: ");
  scanf("%f %f", &x, &y);
  printf("The sum of %.2f and %.2f is: %.2f\n", x, y, x + y);
  return 0;
}