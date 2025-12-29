/*create a program that determines if a given year is a leap year.
(considering condition like disible by 4 but not 100,unless also divisible by 400).*/
#include<stdio.h>
int main(){
    int year;
    printf("enter the year=");
    scanf("%d",&year);
    if(year%4==0){
        printf("leap year");
    }else if(year%100==0){
        printf("not leap year");
    }else if(year%400==0){
        printf("leap year");
    }else{
        printf("not leap year");
    }
    return 0;
}