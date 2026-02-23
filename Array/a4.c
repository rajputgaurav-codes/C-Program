//Calculate the product of all the given array.
#include<stdio.h>
int main(){
    int product=1;
    int arr[5]={25,45,36,15,75};
          for(int i=0;i<5;i++){
            product= product*arr[i];
          }
          printf("Product of those given array is : %d",product);
          return 0;
}