#include <stdio.h>

int main() {
    int num1,num2;
    printf("\nenter two number");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
       printf("\ngreater number is %d",num1);  
    }
    else
    {
      printf("\ngreater number is %d",num2);   
    }
    return 0;
}

