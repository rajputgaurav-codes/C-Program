//Program to check Odd / Even / Zero
#include<stdio.h>
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num%2==1){
        printf("ODD NUMBER");
    }else if(num%2==0){
        printf("EVEN NUMBER");
    }else{
        printf("ZERO");
    }
    return 0;
}