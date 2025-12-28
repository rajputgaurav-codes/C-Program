//write a program that input a number display number is even or odd.
#include<stdio.h>
int main(){
    int num;
    printf("enter a number=");
    scanf("%d",&num);
    if(num==0){
        printf("Even number");
    }else{
        printf("Odd number");
    }
    return 0;
}