#include <stdio.h>

int main()
{
    
   float rate,p,amt,time;
   printf("\nEnterthe principal amount");
   scanf("%f",&p);
   printf("\nEnter the rate of interest in percentage p.a.");
    scanf("%f",&rate);
    printf("\nEnter the time period of interest in years");
    scanf("%f",&time);
    amt=(p)+((p*rate*time)/100);
    printf("\nthe total amount is=%.2f",amt);
    return 0;
}
