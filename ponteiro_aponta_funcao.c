#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


double square(double x)
{
  return x * x;
}

double double_number(double x)
{
  return 2 * x;
}

double square_root(double x)
{
  return sqrt(x);
}

int main()
{

 double (*math_function)(double);
 math_function = square;
 printf("square(9): %.2f\n", (*math_function)(9));

 math_function = double_number;
 printf("double_number(9): %.2f\n", (*math_function)(9));

 math_function = square_root;
 printf("square_root(9): %.2f\n", (*math_function)(9));

 return 0;
}