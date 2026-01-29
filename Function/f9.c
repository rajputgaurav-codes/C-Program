//write a program to find the average of three number using function.
#include<stdio.h>

float result(int a,int b,int c);

float result(int a,int b,int c){
    return  (a+ b+ c)/3.0;
}

int main(){
    int a,b,c;
    printf("enter a first number : ");
    scanf("%d",&a);
    printf("Enter a second number : ");
    scanf("%d",&b);
    printf("Enter a third number : ");
    scanf("%d",&c);
    printf("Average of this three number is : %f",result(a,b,c));
    return 0;
}