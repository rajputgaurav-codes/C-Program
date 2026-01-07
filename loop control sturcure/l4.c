//create a program that computes the sum of the digits of an integer.
#include<stdio.h>
int main(){
    int i,n,s=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(n>0){
       
        s=s+n%10;
         n=n/10;
        
    }
    printf("%d\n",s);
    return 0;
}