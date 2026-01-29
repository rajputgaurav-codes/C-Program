///write a program to convert the celcious to fahrenheit using function.
#include<stdio.h>

float c2f(float);

float c2f(float c){
    return (9/5)*c+32;
}
int main(){
    float c;
    printf("enter a celcious amount : ");
    scanf("%f",&c);
    printf("celcious to fahrenheit amount is : %.2f",c2f(c));
    return 0;
}