//Create a function max that takes two float arguments and returns the large value.
#include<stdio.h>

int max(float x,float y);

int max(float x,float y){
    if(x>y){
        printf("Larger value is : %.2f",x);
    }
    else{
        printf("Larger value is : %.2f",y);
    }
}
int main(){
    float a,b;
    printf("Enter a first number :");
    scanf("%f",&a);
    printf("Enter a second number :");
    scanf("%f",&b);
    max(a,b);
    return 0;
}