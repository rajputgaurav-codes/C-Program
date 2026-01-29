//write a nth number of fibonacci series using recursion.
#include<stdio.h>
int fibonacci(int);

int fibonacci(int a){
    if(a==1||a==2){
        return a-1;
    }
    return fibonacci(a-1) + fibonacci(a-2);
}
int main(){
    int a;
    printf("Enter a nth number : ");
    scanf("%d",&a);
    printf("The value of %d fibonacci series is : %d",a,fibonacci(a));
    return 0;
}