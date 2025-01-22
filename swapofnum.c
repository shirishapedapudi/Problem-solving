#include <stdio.h>

int main()
{
   int a,b;
   printf("Enter 2 numbers:");
   scanf("%d%d",&a,&b);
   printf("Before swapping ,the values are:%d %d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
   printf("After swapping 2 numbers:%d %d",a,b);
    return 0;
}
