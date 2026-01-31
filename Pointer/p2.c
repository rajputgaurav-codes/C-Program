//write a program theat declares an interger variable and a pointer. assign a value and print it using the pointer.
#include<stdio.h>

int main(){
    int x=5;
    int *ptr=&x;
    printf("The address of the value x is:%p",&x);
    printf("\nThe address of the value is=%d",*ptr);
    printf("\nThe address of the value is=%d",*(&x));
    printf("\nThe address of the value is=%p",&ptr);
    return 0;
}