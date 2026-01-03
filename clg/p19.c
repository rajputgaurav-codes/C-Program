//write a program that input number and display following series with there sum. 11,9,7,5,3.
#include<stdio.h>
int main(){
    int i,sum=0;
    for(i=5;i>=1;i--){
        printf("%d\n",i*2+1);
        sum=sum+i*2+1;
    }
    printf("Sum=%d\n",sum);
    return 0;
}