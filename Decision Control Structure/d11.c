//create a program to create a simple calcilator that uses a switch statement
// to perforem basic arithmatic operators like addition, subtraction, multiplication, and division.
#include<stdio.h>
int main(){
    float num1,num2;
    char opr;
    printf("Enter first number=");
    scanf("%f",&num1);
    printf("Enter a second number=");
    scanf("%f",&num2);
    printf("Enter operators like(+,-,*,/) = ");
    scanf(" %c",&opr);
    switch(opr){
        case '+':printf("%f",num1+num2);
        break;
        case '-':printf("%f",num1-num2);
        break;
        case '*':printf("%f",num1*num2);
        break;
        case '/':printf("%f",num1/num2);
        break;
        default:printf("Invalid operator please enter those operator(+,-,*,/)");
    }
    return 0;

    
}