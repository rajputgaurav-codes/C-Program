/*write a program that input Gender and age display valid or 
invalid age for marriage(if male is should age =21 and female is sholuld age >=18).*/
#include<stdio.h>
int main(){
    int age;
    char gender;
    printf("Ehete Gender(m for male and f for female)=");
    scanf("%c",&gender);
    printf("enter age=");
    scanf("%d",&age);

    //check valide for marriage or not
    
    if(gender=='m' && age>=21){
        printf("\nvalid for male");
    }else if(gender=='f' && age>=18){
        printf("\nvalid for female");
    }else{
        printf("\ninvalid");
    }
    return 0;

}