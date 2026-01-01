//create a program to find the minimum of two numbers using ternary operator.
#include<stdio.h>
int main(){
    int num1,num2;
    printf("enter a first number=");
    scanf("%d",&num1);
    printf("enter second number=");
    scanf("%d",&num2);
    num1<num2? printf("%d is a minimum number ",num1): printf("%d is a minimum number",num2);
    return 0;
}