//write a program to check if number is divisible by 2 or not.
#include<stdio.h>
int main(){
    int num;
    printf("enter a number=");
    scanf("%d",&num);
    num%2==0 ? printf("yes it is divisible by 2"):printf("no it is not a divisible by 2");
    return 0;
}