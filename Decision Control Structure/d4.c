//create program that determine the greatest of the three numbers.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a first number=");
    scanf("%d",&a);
    printf("enter a second number=");
    scanf("%d",&b);
    printf("enter a third number=");
    scanf("%d",&c);
    if(a>b&&a>c){
        printf("greatest number a=%d",a);
    }else if(b>a&&b>c){
        printf("greatest number b=%d",b);
    }else{
        printf("greatest number c=%d",c);
    }
    return 0;
}