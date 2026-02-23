// print the marks of 5 students using arrays.
#include<stdio.h>
int main(){
    int marks[5]={89,45,78,36,91};
    
    for(int i=0;i<5;i++){
        printf("The marks of %d student is %d\n",i,marks[i]);
    }
    return 0;
    
}