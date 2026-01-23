//print the factorial of the number .
#include<stdio.h>
int main(){
    int i,fact=1,n;
    printf ("enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       if(fact=fact*i){
        printf("%d! = %d\n",i,fact);
       }
        
    }
   
    return 0;

}