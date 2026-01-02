//write a program that input number and display following series 1,4,9,16,25. and also display sum of the following series.
#include<stdio.h>
int main(){
    int i,sum=0;
    for(i=1;i<=5;i++){
        printf("%d\n",i*i);
        sum=sum+i*i;
    }
    printf("Sum=%d\n",sum);
    return 0;
}