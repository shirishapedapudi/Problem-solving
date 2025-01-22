#include <stdio.h>

int main() {
    int n,rev=0,rem;
    printf("enter the number:");
    scanf("%d",&n);
    int temp=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    printf("reverse number:%d\n",rev);

    return 0;
}
