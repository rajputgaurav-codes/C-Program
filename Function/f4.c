//Write a function to check whether a number is even or odd.
#include<stdio.h>
int check(int x);

 int check(int x){
    if(x%2==0){
        printf("Even number");
    }
    else{
        printf("Odd number");
    }
}
int main(){
    int num;
    printf("enter a number=");
    scanf("%d",&num);
    check(num);

    return 0;
}
