//Write a function to find square of a number.
#include<stdio.h>
int square(int x);

int square(int x){
    printf("Square = %d\n",x*x);
}


int main(){
    int a=2;
    square( a); 

    int b=5;
    square(b);

    int c;
    printf("enter a number=");   //take user from the user.
    scanf("%d",&c);
    square(c);
    return 0;
}