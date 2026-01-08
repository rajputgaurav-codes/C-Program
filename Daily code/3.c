//convert celsius to fahrenheit.
#include<stdio.h>
int main(){
    // float c,f;
    // printf("enter a value of celsius=");
    // scanf("%f",&c);
    // f=(c*9/5)+32;
    // printf("Fahrenheit=%.2f",f);
    // return 0;

    //convert fahrenheit to celsius.
    float f,c;
    printf("enter a value of fahrenheit=");
     scanf("%f",&f);
     c=(f-32)*5/9;
     printf("Celsius=%.2f",c);
     return 0;

}