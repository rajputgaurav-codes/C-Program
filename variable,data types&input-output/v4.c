//Write a C program to input a character and print its ASCII value.
#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character=");
    scanf("%c",&ch);
    printf("ASCII value of %C=%d",ch,ch);
    return 0;
}