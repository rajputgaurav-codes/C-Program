//write a program that input number and display following series with there sum. 25,16,9,4,1.
#include<stdio.h>
int main(){
    int i,sum=0;
    for(i=1;i<=5;i++){
        printf("%d\n",i*i+i);
        sum=sum+i*i*+i;
    }
    printf("Sum=%d",sum);
    return 0;
}