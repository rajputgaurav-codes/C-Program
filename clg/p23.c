//write a peogram that input multiple numbers ignored negative numbers.input numbers till user enter 0. finally display sum of all positinive numbers.
#include<stdio.h>
int main(){
    int n,sum=0;
   
    while(1){
        printf("enter a number=");
    scanf("%d",&n);
       
        if(n==0){
             break;
        }
        if(n>0){
        sum=sum+n;
        }
    }
    printf("sum=%d\n",sum);
    return 0;
}