//create a program to sum of all odd number from 1 to a specified number n.
#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("enter a number=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==1){
            printf("%d\n",i);
        }
        sum=sum+i;
    }
    printf("sum=%d\n",sum);
    return 0;
}