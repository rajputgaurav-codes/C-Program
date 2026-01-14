// menu driven program by switch statement
#include<stdio.h>
int main(){
    int  a,b;
    char op;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    printf("enter operators:");
    scanf(" %c",&op);

    switch(op){
        case '+': printf("summbition=%d\n",a+b);
        break;
        case '-': printf("subtract=%d\n",a-b);
        break;
        case '*': printf("multiplication=%d\n",a*b);
        break;
        case '/': printf("division=%d\n",a/b);
        break;
        case '%': printf("reminder=%d\n",a%b);
        break;
        default:
          printf("invalid");
    }
    return 0;
}