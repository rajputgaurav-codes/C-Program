//create a program to find if the given number is even or odd using ternery operatar.
#include<stdio.h>
int main(){
    int num;
    printf("enter a number=");
    scanf("%d",&num);
    num%2==0? printf("even number"):printf("odd number");
    return 0;
}