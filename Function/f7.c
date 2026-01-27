//write a function that adds that takes 4 int parameters and returns the sum.
#include<stdio.h>

int result(int a,int b,int c,int d);

 int result(int a,int b,int c,int d){
   return (a+b+c+d);
}
int main(){
    int a=4,b=8,c=9,d=3;
    printf("The sum of this number is : %d",a+b+c+d);
    result(a,b,c,d);
    return 0;
}