//create a program that determines if a number is odd or even.
#include<stdio.h>
int main(){
    int num;
    printf("enter a number=");
    scanf("%d",&num);
    (num%2==0)? printf("Even number"):printf("Odd number");
    return 0;
}