//Give an integer value,convert it to a floating-point value and print both.
#include<stdio.h>
int main(){
    int a;
    float b;
    printf("enter a value=");
    scanf("%d",&a);
    b=(float)a;
    printf("integer value=%d",a);
    printf("Floating-point value=%.2f",b);
    return 0;
}