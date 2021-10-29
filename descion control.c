#include <stdio.h>
int main()
{
    int maths,eng,kisw,comp,chem,sum,avg;
    printf("enter maths,eng,kisw,comp,chem\n");
    scanf("%d%d%d%d%d",&maths,&eng,&kisw,&comp,&chem);
    sum=maths+eng+kisw+comp+chem;
    avg=sum/5;
    printf("avg=%d",avg);
    if (avg>=90&&avg<=100)
        {
          printf("grade A");
        }
    else if(avg>=80&&avg<90)
       {
            printf("grade B");
        }
    else if(avg>=70&&avg<80)
        {
            printf("grade C");
        }
        else if(avg>=60&&avg<70)
        {
            printf("grade C");
        }
         else if(avg>=50&&avg<60)
         {
             printf("grade D");
         }
          else if(avg<50)
          {
              printf("FAIL");}
         
         return 0;
        }


