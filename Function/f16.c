//enter a two number by user and print the whose number is minimum and maximum using function.
#include<stdio.h>
int result(int,int);

int result(int a,int b){
    int min,max;
    if(a>b){
        min=b;
        max=a;
    }
    else{
        min=a;
        max=b;
    }
     printf("If a=%d and b=%d then the mimimum num is:%d and maximum num is:%d",a,b,min,max);
}


int main(){
    int a,b;
    printf("enter a first number : ");
    scanf("%d",&a);
    printf("enter a second number : ");
    scanf("%d",&b);
    result(a,b);
    return (a,b);
   
}