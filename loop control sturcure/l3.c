//write a function to calculate the factorial of a given number.
#include<stdio.h>
int main(){
    int i,n,fact=1;
    // i=1;
    // while(i<=n){
    //     printf("enter a number=");
    //     scanf("%d",&n);
    //     fact=fact*i;
    //     i++;
    // }
    // printf("factorial=%d",fact);
    // return 0;
    printf("enter a number=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
        
    }
    printf("factorial=%d\n",fact);
    return 0;
}