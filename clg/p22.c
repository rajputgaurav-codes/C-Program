//write a program that input n display following pattern using while loop.
#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter a number=");
    scanf("%d",&n);
    i=n;
    while(i>=1){
        printf("%d\n",i*i);
        sum=sum+i*i;
        i--;
    }
    printf("Sum=%d\n",sum);
    return 0;
}