/*write a program that input principal amount, rate of interest,and number of year. 
calucate simple interset.*/
#include<stdio.h>
 int main(){
    float p, r, n,si;
    printf("enter a principal amount: ");
    scanf("%f",&p);
    printf("enter a rate of interset: ");
    scanf("%f",&r);
    printf("enter a number of year: ");
    scanf("%f",&n);
    si=p*r*n/100;
    printf("\nSimple interset:%f",si);
    return 0;
 }