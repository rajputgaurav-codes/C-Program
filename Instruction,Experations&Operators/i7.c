//Create a program to convert fahrenheit to celsius.
#include<stdio.h>
int main(){
    int f;
    float c;
    printf("enter a fahrenheit= ");
    scanf("%d",&f);
    c=(f-32)*5.0/9.0;
    printf("enter a celsius=%f",c);
    return 0;
}