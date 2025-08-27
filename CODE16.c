#include <stdio.h>

int main() {
    int a,b,c;
    printf("\nenter three number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
       printf("\nlargest number is=%d",a);  
    }
    else if(b>a&&b>c)
    {
        printf("\nlargest number is=%d",b); 
    }
    else
    {
        printf("\nlargest number is=%d",c); 
    }
    return 0;
}


