//Write a C program to input two float numbers and calculate their average.
#include<stdio.h>
int main(){
    float a,b;
    float avg;
    printf("enter a first number=");
    scanf("%f",&a);
    printf("enter a second number=");
    scanf("%f",&b);
    avg= (a+b)/2;
    printf("Average=%.2f",avg);
    return 0;

}