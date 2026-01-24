//print the number 1 to 100 using function
#include<stdio.h>
int count_to_100();
int count_to_100(){
    for(int i=1;i<=100;i++){
        printf(" %d", i);
    }
}
int main(){
    count_to_100();
    return 0;
}