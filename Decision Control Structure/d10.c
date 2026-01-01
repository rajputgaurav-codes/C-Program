//create a program to print the monthn of the year based on a number (1-12) input by the user.
#include<stdio.h>
int main(){
    int num;
    printf("enter your number between (1-12)=");
    scanf("%d",&num);
    switch (num){
        case 1:printf("Janvary");
        break;
        case 2:printf("Febvary");
        break;
        case 3:printf("March");
        break;
        case 4:printf("April");
        break;
        case 5:printf("May");
        break;
        case 6:printf("June");
        break;
        case 7:printf("July");
        break;
        case 8:printf("August");
        break;
        case 9:printf("September");
        break;
        case 10:printf("Ocumber");
        break;
        case 11:printf("November");
        break;
        case 12:printf("December");
        break;
        default:printf("Invalid");
    }
    return 0;
}