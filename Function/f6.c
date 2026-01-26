//Write a function to calculate factorial of a number.
#include<stdio.h>
int factorial(int f);

int factorial(int f){
    int fact=1,i;
    for( i=1;i<=f;i++){
       fact=fact*i;
        
       printf("%d! = %d\n",f,fact);
      }
}
int main(){
    int a;
    printf("Enter the number=");
    scanf("%d",&a);
     factorial(a);
   
    return 0;
}
