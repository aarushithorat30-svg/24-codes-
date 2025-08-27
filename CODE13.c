#include <stdio.h>

int main() {
    int num;
    printf("\nenter a number");
    scanf("%d",&num);
    if(num%2==0)
    {
       printf("\neven number");  
    }
    if(num%2!=0)
    {
      printf("\nodd number");   
    }
    return 0;
}
