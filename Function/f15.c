//swap two number using function.
#include<stdio.h>

int swap(int,int);

int swap(int x,int y){
    int num=x;
    x=y;
    y=num;
}

int main(){
    int x=22,y=30;
    swap(x,y);
    printf("The number after swap is x=%d , y=%d",x,y);
    return 0;
}