#include <stdio.h>

int main() 
{

   int num1,num2,result;
   float result1;
   printf("\n Enter two numbers");
   scanf("%d%d",&num1,&num2);
   result=num1+num2;
   printf("\nThe sum of two numbers=%d",result);
    result=num1-num2;
    printf("\nThe difference of two numbers=%d",result);
     result=num1*num2;
     printf("\nThe product of two numbers=%d",result);
      result1=num1/(float)num2;
      printf("\nThe division of two numbers=%f",result1);
    return 0;
}
