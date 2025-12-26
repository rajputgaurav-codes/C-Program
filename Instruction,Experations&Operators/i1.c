//create a program that takes two numbers and display results of all arithmetic operators(+,-,*,/,%).
#include<stdio.h>
int main(){
    int num1,num2;
    float divi;
    printf("enter a first number: ");
    scanf("%d",&num1);
    printf("enter a second number: ");
    scanf("%d",&num2);
    printf("Addition=%d\n",num1+num2);  //used (+) operator.
    printf("Subtraction=%d\n",num1-num2);  //used (-) operator.
    printf("Multiplication=%d\n",num1*num2); //used (*) operator.
    divi= (float)num1/num2;
    printf("Division=%.2f\n",divi); //used (/) operator.
    printf("Reminder=%d\n",num1%num2);
    return 0;
    

}