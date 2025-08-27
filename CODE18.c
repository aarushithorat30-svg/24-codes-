#include <stdio.h>

int main()
{
   int unit,bill;
   printf("\n enter the unit of electricity consumed");
   scanf("%d",&unit);
   if(unit<=100)
   {
       bill=(unit*3);
       printf("\n The total electricity bill is Rs. %d",bill);
   }
    if(unit>=101)
   {
       if(unit<=300)
       {
       bill=(unit*5)+100;
       printf("\n The total electricity bill is Rs. %d",bill);
       }
    }
   if(unit>=301)
   {
       if(unit<=500)
       {
       bill=(unit*7)+200;
       printf("\n The total electricity bill is Rs. %d",bill);
       }
    }
    if(unit>=501)
   {
       bill=(unit*10)+300;
       printf("\n The total electricity bill is Rs. %d",bill);
   }
    return 0;
}
