//write a program that input number and display following series 0,7,26,63,124. also display sum of the following series.
#include<stdio.h>
int main(){
    int i,sum=0;
    for(i=1;i<=5;i++){
        printf("%d\n",i*i*i-1);
        sum=sum+i*i*i-1;
    }
    printf("Sum=%d\n",sum);
    return 0;
}