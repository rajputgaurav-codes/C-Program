// Storing elements in a matrix and printing it.
#include<stdio.h>
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("arr[%d][%d] : ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("print the following matrix");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("\narr[%d][%d] : %d\t",i,j,arr[i][j]);
        }
    }
    return 0;
} 