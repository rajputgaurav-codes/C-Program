//write a program to change the value of the interger variable using pointer and the * operatar.
#include<stdio.h>
int main(){
    int num=25;
    int *ptr=&num;
     //change the num value using * operator.
     *ptr=67;
     printf("The value of the num is : %d",num);
         
    return 0;
} 