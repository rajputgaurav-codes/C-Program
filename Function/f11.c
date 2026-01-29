//write a function to calculate the force of attraction on a body of mass 'm' exterted by earth.considering g= 9.8.
#include<stdio.h>

float Force(float);

float Force(float mass){
    return mass*9.8;
}
int main(){
    float m;
    printf("enter a Mass amount : ");
    scanf("%f",&m);
    printf("Force of attraction on a body of mass 'm' exterted by earth is %.2f",Force(m));
    return 0;
}