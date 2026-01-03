//writw a program that input number and isplay following series. 2,5,10,17,26. also display sum of the following series.
#include<stdio.h>
int main(){
    int i,sum=0;
    for(i=1;i<=5;i++){
        printf("%d\n",i*i+1);
        sum=sum+i*i+1;
    }
    printf("Sum=%d\n",sum);
    return 0;
}