//Program to check Leap Year Rules: Year divisible by 400 → leap ,Divisible by 100 → not leap ,Divisible by 4 → leap
#include<stdio.h>
int main(){
    int y;
    printf("enter a year:");
    scanf("%d",&y);
    if(y/400==0){
        printf("Leap year");
    }else if(y/100==0){
        printf("not leap year");
    }else if(y%4==0){
        printf("leap year");
    }
}