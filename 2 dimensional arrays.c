#include <stdio.h>

int main() 
{
    int sets[2][3],i,j;
    printf("enter 6 values");
    for(i=0;i<2;i++)
{
    for (j=0;j<3;j++)
{    
    scanf("%d", &sets[i][j]);    
}
}

for(i=0;i<2;i++)
{
    for (j=0;j<3;j++)
{
   printf("sets[%d][%d]=%d\n", i,j,sets[i][j]);        
}
}

    return 0;
}
