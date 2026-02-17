//calculate the maximum element of the array.
#include<stdio.h>
int main(){
    int max=-1;
    int arr[10]={25,45,6,4,245,455,15,2,151,85};
    for(int i=0;i<10;i++){
         if(max<arr[i]){
            max=arr[i];
         }
    }
    printf("The maximum element of arrays is : %d",max);
    return 0;
}