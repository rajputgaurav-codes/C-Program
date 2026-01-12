/*Program to calculate:
a = 5
b = 3
Result = a++ + ++b + a-- - --b */
#include<stdio.h>
int main(){
    int a=5,b=3;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("Result=%d",a++ + ++b + a-- - --b);
    return 0;
}