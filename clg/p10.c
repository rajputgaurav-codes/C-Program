//write a program that input percentage display percentage valid or not.
#include<stdio.h>
int main(){
    float per;
    printf("enter a percentage=");
    scanf("%f",&per);
     if(per>=0 && per<=100){
        printf("It is a valid percentage");
     }else{
        printf("It is not a valid percentage");
     }
     return 0;
}