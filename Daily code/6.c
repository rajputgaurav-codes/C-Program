//Program to show operator precedence
#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter value of a=");
    scanf("%d",&a);
     printf("enter value of b=");
    scanf("%d",&b);
     printf("enter value of c=");
    scanf("%d",&c);
    d=(a*b)-c/a+b;
    printf("value of d=%d",d);
    return 0;
}