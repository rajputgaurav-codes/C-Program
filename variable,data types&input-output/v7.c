//Write a C program to input an integer and convert it into a float, then print the result.
#include<stdio.h>
int main(){
    int num;
    float fnum;
    printf("enter a number=");
    scanf("%d",&num);
    fnum=(float) num; //type casting
    printf("float value=%.2f",fnum);
    return 0;
}