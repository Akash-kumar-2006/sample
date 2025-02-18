#include<stdio.h>
int main ()
{
  int n,copy,sum=0,a,b,c;
  printf("enter the value n");
  scanf("%d",&n);
  printf("enter the value a");
  scanf("%d",&a);
  printf("enter the value b");
  scanf("%d",&b);
  printf("enter the value c");
  scanf("%d",&c);
  copy=n;
  while(n>0)
  {


   sum=sum+(a*a*a);
   sum=sum+(b*b*b);
   sum=sum+(c*c*c);



   copy/=10;
   printf("%d",copy);

  }

   return 0;







}
