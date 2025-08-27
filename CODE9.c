#include <stdio.h>

int main()
{
    
   float l,b,area,peri;
   printf("\nEnter the length and breadth of a rectangle");
   scanf("%f%f",&l,&b);
   area=l*b;
   peri=2*(l+b);
  printf("\n the area of a rectangle%f\n",area);
  printf("\n the perimeter of a rectangle%f\n",peri);

   
    return 0;
}

