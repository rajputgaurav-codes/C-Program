//calculate simple interset.
#include<stdio.h>
int main(){
    float p,t,r;
    printf("enter a principal amount=");
    scanf("%f",&p);
    printf("enter a time=");
    scanf("%f",&t);
    printf("enter rate of interset=");
    scanf("%f",&r);
    printf("\nSimple interset=%f",p*t*r/100);
    return 0;
}