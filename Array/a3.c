//Calculate the sum of the all the elements in the given array.
#include<stdio.h>
int main(){
    int sum=0;
    int arr[5]={25,45,35,45,24};
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    printf("Sum of this given array is : %d",sum);
    return 0;
}