//Create a program to calulate the Area of a triangle.
#include<stdio.h>
int main(){
    int b,h;
    float c;
    printf("enter a value of Breadth=");
    scanf("%d",&b);
    printf("enter a value of height=");
    scanf("%d",&h);
    c=(float)1/2*b*h;
    printf("Area of a triangle=%.2f\n",c);
    return 0;

}