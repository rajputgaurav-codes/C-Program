//*Addition of two matrix in C

#include<stdio.h>
int main(){
    int a[3][3],b[3][3],sum[3][3],i,j;
    printf("enter the a matrix");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("a[%d][%d] : \n",i,j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("\nenter the b matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("b[%d][%d] : \n",i,j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

      printf("\nprint the a matrix\n");
      for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("a[%d][%d] : %d \n",i,j,a[i][j]);
        }
        printf("\n");
    }

     printf("\nprint the b matrix\n");
      for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("b[%d][%d] : %d \n",i,j,a[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of both matrix\n");
      for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d\n",sum[i][j]);
        }
        printf("\n");
    }
}