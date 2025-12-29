//create a program that determines if a number is positive, negative or  zero.
#include<stdio.h>
int main(){
    int num;
    printf("enter a number=");
    scanf("%d",&num);
     if(num>0){
        printf("Positive number");
     }else if(num<0){
        printf("Negative number");
     }else{
        printf("Zero");
     }return 0;
}
