// C program to store temperature of two cities of a week and display it. 
#include<stdio.h>
int main(){
    int temperature[2][7];
    for(int i=0;i<2;i++){
        for(int j=0;j<7;j++){
            printf("temperature[%d][%d] = \n",i,j);
            scanf("%d",&temperature[i][j]);
        }
    }

      printf("\nDisplay the following temperature of city in paricular week\n");
       for(int i=0;i<2;i++){
        for(int j=0;j<7;j++){
            printf("temperature[%d][%d] = %d\n",i,j,temperature[i][j]);
            
        }
    }
    return 0;
}