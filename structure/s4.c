/*Write a C structure volume with fields: liter and milliliter. Read the value of two 
volumes and add them, if the value of milliliter is more than 1000 then add it to liter 
value.*/
#include<stdio.h>
struct volume{
    int litter;
    int milliliter;
}v1,v2;
int main(){
    printf("Enter a value of litter: ");
    scanf("%d",&v1.litter);
    printf("Enter a value of milliliter: ");
    scanf("%d",&v1.milliliter);
    printf("Enter a value of litter: ");
    scanf("%d",&v2.litter);
    printf("Enter a value of milliliter: ");
    scanf("%d",&v2.milliliter);
    int total_litter=v1.litter+v2.litter;
    int total_milliliter=v1.milliliter+v2.milliliter;
    if(total_milliliter>=1000){
        total_litter=total_litter+(total_milliliter/1000);
        total_milliliter=total_milliliter%1000;
    }
    printf("Total Litter : %d\n",total_litter);
    printf("Total Milliliter : %d",total_milliliter);
    return 0;
}