//Write a C program to input roll number, name (single word), and marks, then display the output as:
#include<stdio.h>
int main(){
    int roll;
    int a,b;
    char name[10];
    float marks;
    printf(" Roll no.=");
    scanf("%d",&roll);
    printf("Name=");
    scanf("%s",name);
    printf("enter a first number=");
    scanf("%d",&a);
    printf("enter a second number=");
    scanf("%d",&b);
    marks=a+b/2;
    printf("Marks=%.2f",marks);
    printf("\nDisplay\n");
    printf("Roll no:%d\n",roll);
    printf("Name:%s\n",name);
    printf("Marks=%.2f",marks);
    return 0;

}