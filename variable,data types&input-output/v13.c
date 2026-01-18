//write a program that input two numbers and display Add,Sub,Multiplication,Divi,and reminder.
#include<stdio.h>
 int main(){
    int a,b;
    float divi;
    printf("enete a first number: ");
    scanf("%d",&a);
    printf("enete a second number: ");
    scanf("%d",&b);
    printf("\nADD=%d",a+b);
    printf("\nSub=%d",a-b);
    printf("\nMultiplication=%d",a*b);
    divi= (float)a/b;
    printf("\nDivision=%f",divi);
    printf("\nReminder=%d",a%b);
    return 0;

 }
