//Strong number

#include<stdio.h>

int main() {
   int a,b,rem,sum=0;
   printf("enter the number:");
   scanf("%d" ,&a);
   b=a;
   while(a>0)
   {
       rem=a%10;
       int fact=1;
       for(int i=1;i<=rem;i++){
           fact*=i;
       }
       sum+=fact;
       a/=10;
   }
   if(sum==b)
   {
       printf("%d is a strong number \n",b);
   }
   else
   {
       printf("%d is not a strong number\n",b);
   }
   return 0;
}
