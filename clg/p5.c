//write a programme that input 2 number and dispaly biggest number between them.
#include<stdio.h>
 int main(){
    int a,b;
    printf("enter a first number=");
    scanf("%d",&a);
    printf("enter a second number=");
    scanf("%d",&b);
    
    if(a>b){
        printf("biggest number=%d",a);
    }
    else if(b>a){
        printf("biggest number=%d",b);
    }
    else{
        printf("both are equal");
    }
    return 0;
 }
