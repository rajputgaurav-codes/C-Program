//Swap two numbers using assignment operators only
#include<stdio.h>
int main(){
    int a=5,b=10;
    printf("%d\n",a);
    printf("%d\n",b);
    a=a+b;
    b=a-b;
    a-=b;
    printf("after swaping\n");
    printf("%d\n",a);
    printf("%d\n",b);return 0;
}