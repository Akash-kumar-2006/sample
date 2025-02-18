#include<stdio.h>
int main ()
{

 int n,i,mid,key,low,high;
 printf("enter no of terms :");
 scanf("%d",&n);
 int array[n];

 for(i=0;i<n;i++)
    {

       printf("index %d:",i);
       scanf("%d",&array[i]);
       printf("\n");
    }
 printf("enter the value key:");
 scanf("%d",&key);

 low=0;
 high=n-1;


  while(low<=high){

    mid=(low+high/2);
    if(array[mid]<key){

     low=mid+1;
     }
   else if(array[mid]==key){

    printf("%d found at index %d ",key,mid);
    break;
   }
   else
   {
    high=mid-1;

   }

  }
  if(low>high){

   printf("%d not found in the list",key,mid-1);


  }



return 0;


}
