/* wirte a c program that creates structure of employee with member Empid,Empname,Qulification and Empsalary by 
taking input of 5 employee display the employee whose qualification id "MBA" and salary greate than 20000*/

#include<stdio.h>
#include<string.h>
struct employee{
    int empid;
    char empname[50];
    char qulificition[40];
    int empsalary;
}e[5];

int main(){
    for(int i=0;i<5;i++){
        printf("emp %d id = \n",i);
        scanf("%d",&e[i].empid);
        printf("empname = ");
        scanf(" %s",e[i].empname);
        printf("Qulificition = ");
        scanf(" %s",e[i].qulificition);
        printf("empsalary = ");
        scanf("%d",&e[i].empsalary);

    }
    for(int i=0;i>5;i++){
    printf("\nprint the employees details\n");
    if(strcpy(e[i].qulificition,"mba")&& e[i].empsalary>20000){
        printf("empid = %d\n",e[i].empid);
        printf("empname = %s\n",e[i].empname);
        printf("Qulificition = %s\n",e[i].qulificition);
        printf("empsalary = %d\n",e[i].empsalary);
        

    }}

    return 0;
}