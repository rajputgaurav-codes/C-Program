//calulate compound interset.
#include<stdio.h>
int main(){
    float p,r,t,ci;
    printf("enter a principal amount=");
    scanf("%f",&p);
    printf("enter a time=");
    scanf("%f",&t);
    printf("enter rate of interset=");
    scanf("%f",&r);
    ci=p*(1+r/100)*t;
    printf("compound interset=%f",ci);
    return 0;
}