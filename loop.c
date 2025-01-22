//print even number 21-60 and their sum
#include <stdio.h>
int main() {
    int sum=0;
    for(int i=21;i<=60;i++){
        if(i%2==0){
            printf("%d ",i);
            sum+=i;
        }
    }
        printf("\nSum:%d",sum);
        return 0;
}
