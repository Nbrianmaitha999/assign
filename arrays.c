#include <stdio.h>
 int main() 
 {
 int x[5]={9,12,76,8,3};
 int i=5;
 for (int i = 0; i < 5; i++)
 {
  x[i]=i+1;   
 printf("\n x[%d]=%d", i, x[i]);
 }
 return 0;
 }
