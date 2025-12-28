//write a program that input year and check whether it is leap year or not leap year.
#include<stdio.h>
int main(){
    int y;
    printf("enter a year=");
    scanf("%d",&y);

    if(y%4==0){
        printf("leap year");
    }else{
        printf("not leap year");
    }
    return 0;
}