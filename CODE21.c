#include <stdio.h>

int main()
{
  int n,i=0;
  printf("enter n numbers");
  scanf("%d",&n);
  while(i<=n)
  {
      if (i%5==0&&i%7==0)
      {
        printf("\n%d are divisible by 5 and 7",i);  
      }
      i++;
  }

    return 0;
}
