#include <stdio.h>

int main() 
{
    int sets[2][2][3],i,j,k;
    printf("enter 12 values");
    for(i=0;i<2;i++)
{
    for (j=0;j<2;j++)
{
    for (k=0;k<3;k++)
{    
    scanf("%d", &sets[i][j][k]);    
}
}
}
for(i=0;i<2;i++)
{
    for (j=0;j<2;j++)
{
    for (k=0;k<3;k++)
{
   printf("sets[%d][%d][%d]=%d\n", i,j,k,sets[i][j][k]);        
}
}
}
    return 0;
}
