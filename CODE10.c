#include <stdio.h>

int main()
{
   int a,b,c;
   printf("enter two numbers");
   scanf("%d%d",&a,&b);
   c=a;
   a=b;
   b=c;
   printf("\n a=%d\n",a);
   printf("\n b=%d\n",b);
   return 0;
}

