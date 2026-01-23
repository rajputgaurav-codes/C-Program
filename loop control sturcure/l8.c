//print the table and also its sum.
#include<stdio.h>
int main(){
    int i=1,s=0,n;
    printf("enter a number: ");
    scanf("%d",&n);
    while(i<=10){
        printf("%d x %d = %d\n",n,i,n*i);
        s+=n*i;
        i++;
    }
    printf("sum=%d",s);
    return 0;
}