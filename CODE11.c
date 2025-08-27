#include <stdio.h>

int main()
{
   int a,b;
   printf("enter two numbers");
   scanf("%d%d",&a,&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("\n a=%d\n",a);
   printf("\n b=%d\n",b);
   return 0;
}
