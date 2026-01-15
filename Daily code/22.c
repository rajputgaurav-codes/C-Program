//print first 10 natural number and their sum.
#include<stdio.h>
int main(){
    int i,s=0;
    i=1;
    while(i<=10){
        printf("%d\n",i);
        s=s+i;
        i++;
    }printf("\nsum=%d",s);
}