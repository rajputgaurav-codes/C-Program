//Write a praogram to calulate perimeter of rectangle.
//Take side,a & b, from the user.
#include<stdio.h>
int main(){
    int a,b,p;
    printf("\nenter length=");
    scanf("%d",&a);
    printf("\nenter breath=");
    scanf("%d",&b);
    p=2*(a+b);
    printf("Perimeter of rectangle=%d",p);
    return 0;
} 