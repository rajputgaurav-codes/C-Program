//Write a function to find maximum of two numbers.
#include<stdio.h>
int find(int x, int y);

int find(int x, int y){
    if(x>y){
        printf("%d Is a Maximum number",x);
    }
    else{
        printf("%d Is a Maximum number",y);
    }
}
int main(){
    int a,b;
    printf("Enter first number=");
    scanf("%d",&a);
    printf("Enter Second number=");
    scanf("%d",&b);
    find(a,b);
    return 0;
}