//write a program that input a number. Display Square, Cube and Double of number.
#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("Square=%d",n*n);
    printf("Cube=%d",n*n*n);
    printf("Double of number=%d",n*2);
    return 0;
}