//Write a program to find the sum of first N natural numbers using a while loop.
#include<stdio.h>
int main(){
    int n,i=1,sum=0;
    printf("enter a number=");
    scanf("%d",&n);
    while(i<=n){
        sum+=i;
        i++;
        
    }
    printf("sum=%d",sum);
    return 0;
}