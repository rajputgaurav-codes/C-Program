//swap two number using pointer.
#include<stdio.h>
int swap(int*,int*);

int swap(int*ptr1,int*ptr2){
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
    


int main(){
    int a=45,b=23;
    swap(&a,&b);
    printf("The number after swap is a=%d , b=%d",a,b);
    return 0;
}