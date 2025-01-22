//flip the array of elements in cyclic order of d positions
#include <stdio.h>

int main()
{
   int first,n,j,i,d;
   printf("enter the size of array:");
   scanf("%d",&n);
   int arr[n];
   printf("enter the elements in an array:");
   for(i=0;i<n;i++){
       
       scanf("%d",&arr[i]);
   }
   printf("enter the position:");
   scanf("%d",&d);
   for(i=0;i<d;i++){
       first=arr[0];
       for(j=0;j<n;j++){
           arr[j]=arr[j+1];
       }
       arr[n-1]=first;
   }
   printf("after fliping the array of elements:");
   for(i=0;i<n;i++){
       printf("%d ",arr[i]);
   }
    return 0;
}
