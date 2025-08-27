#include <stdio.h>

int main()
{
    int d1,m1,y1,d2,m2,y2,d,m,y;
    printf("\n enter dob in dd mm yyyy");
    scanf("%d%d%d",&d1,&m1,&y1);
    printf("\n enter present date in dd mm yyyy");
     scanf("%d%d%d",&d2,&m2,&y2);
     if(y2>y1)
     {
         if(d1>d2)
         {
             d2=(d2+30);
             m2=m2-1;
         }
          if(m1>m2)
         {
             m2=(m2+12);
             y2=y2-1;
         }
         y=y2-y1;
         m=m2-m1;
         d=d2-d1;
         printf("\nThe age is%dyears,%dmonths,%ddays",y,m,d);
     }
     else
     {
         printf("\n Please enter the correct date of birth");
     }
    return 0;
}
