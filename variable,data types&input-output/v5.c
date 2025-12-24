//Write a C program to input a name (single word) and print it.
#include<stdio.h>
int main(){
    char name[10];
    printf("enter a name=");
    scanf("%s",name);
    printf("\nYour name is %s",name);
    return 0;
}