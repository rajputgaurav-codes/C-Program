// //write a program that input number and display factorial of the number.
// #include<stdio.h>
// int main(){
//     int i,fact=1;
//     for(i=1;i<=6;i++){
//         fact=fact*i;
//         printf("%d\n",fact);

//     }
    
//     return 0;
// }

//take user input to display numbers factorial.
#include<stdio.h>
int main(){
    int i,n,fact=1;
    printf("enter a number=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;    
    }
    printf("Facttorial=%d",fact);
    return 0;
}