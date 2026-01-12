//Program to input 3 numbers and print the maximum using only operators (no if).
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a first value:");
    scanf("%d",&a);
    printf("enter a second value:");
    scanf("%d",&b);
    printf("enter a third value:");
    scanf("%d",&c);
  (a>b&&a>c)? printf("Maximum value:%d",a):
  (b>a&&b>c)? printf("Maximum value:%d",b):
  printf("Maximum value:%d",c);
    return 0;
}