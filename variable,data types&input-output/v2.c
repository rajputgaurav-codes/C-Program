//weite a c program to input two integers and display their sum, difference, and product.
#include<stdio.h>
int main(){
    int num1,num2;
    printf("enetr first number=");
    scanf("%d",&num1);
    printf("enter second number=");
    scanf("%d",&num2);
    printf("Sum=%d",num1+num2);
    printf("Difference=%d",num1-num2);
    printf("Product=%d",num1*num2);
    return 0;
}