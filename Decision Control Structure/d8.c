//create a program to calculate the absolute value of a given integer using ternery operator.
#include<stdio.h>
int main(){
    int num;
    printf("Enter your number=");
    scanf("%d",&num);
    num>0?printf("%d is a absolute number",num):printf("%d is a absolute number",-num);
    return 0;
}