//Write a C program to input a float number and display it up to 2 decimal places.
#include<stdio.h>
int main(){
    float num;
    printf("enter a number=");
    scanf("%f",&num);
    printf("Number=%.2f",num);
    return 0;
}