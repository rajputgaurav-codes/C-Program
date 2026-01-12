//Program to demonstrate pre and post increment in one program.
#include<stdio.h>
int main(){
    int a;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("pre increment:%d\n",a++);
    printf("post increment:%d\n",++a);
    return 0;
}