#include<stdio.h>
float PI = 3.142;
float area(float radius);
int main()
{
 float radius,A;
 printf("Enter radius:");
scanf("%f", &radius);
A=area(radius);
 printf("Area= %f\n", A);
}
/* return area of a circle */
  float area(float radius)
  {
  return (PI * radius * radius);
}

