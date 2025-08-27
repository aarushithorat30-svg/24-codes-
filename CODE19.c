#include <stdio.h>

int main()
{
    int year;
    printf("\nenter the year");
    scanf("%d",&year);
    if(year%100==0&&year%400==0)
    {
       printf("\nleap year"); 
    }
    else
    {
       if(year%100!=0&&year%4==0)
    {
       printf("\nleap year"); 
    }  
       else
       {
            printf("\nnot leap year"); 
       }
    }
    return 0;
}


