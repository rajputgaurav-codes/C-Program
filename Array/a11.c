//subtraction of two matrix in C
#include<stdio.h>
int main(){
    int a[2][2],b[2][2],sub[2][2],i,j;
    printf("\nenter the A matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("a[%d][%d] : ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nenter the B matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("b[%d][%d] : ",i,j);
            scanf("%d", &b[i][j]);
        }
    }
    
    printf("\nPrint the A matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("a[%d][%d] :%d\n",i,j,a[i][j]);
        }
    }
    
    printf("\nPrint the B matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("b[%d][%d] :%d\n",i,j,b[i][j]);
        }
    }
    
    printf("\nSubtraction of both matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sub[i][j]=a[i][j] - b[i][j];
            printf("%d\n",sub[i][j]);
        }
    }
    return 0;
    
    
}