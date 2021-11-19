#include <stdio.h>
 int main() 
 {
 int x[5]={1,2,3,4,5};
 int i=5;
 for (int i = 0; i < 5; i++)
 {
  x[i]=i+1;   
 printf("\n x[%d]=%d", i, x[i]);
 }
 return 0;
 }
