//write a progaram to declare a function is void minmax pand print the maximum and mimimum of two number using pointer as well.
#include<stdio.h>
void min_max(int*,int*,int*,int*);

void min_max(int *a,int *b,int *min,int *max){
    if(*a>*b){
        *min=*b;
        *max=*a;
    }
    else{
        *min=*a;
        *max=*b;
    }
}

int main(){
    int a,b,min,max;
    printf("Enter a first number : ");
    scanf("%d",&a);
    printf("Enter a second number : ");
    scanf("%d",&b);
    min_max(&a,&b,&min,&max);
    printf("if a=%d and b=%d then minimum number is : %d and maximum number is :%d",a,b,min,max);
    return 0;
}