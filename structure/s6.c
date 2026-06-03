/* write a program that create structure employee with id, name and salary.
enter data of five employee.display data of thode employee whose salary is >1000.*/
#include<stdio.h>
#include<conio.h>
struct employee{
    int id;
    char name[50];
    int salary;
}e[5];
int main(){
    int i;
    for(  i=0;i<5;i++){
        printf("\n%d employee details\n",i+1);
        printf("employee id:");
        scanf("%d",&e[i].id);
        printf("employee name:");
        scanf(" %s",e[i].name);
        printf("employee salary:");
        scanf("%d",&e[i].salary);

        
        }
    for(i=0;i<5;i++){
        if(e[i].salary>10000){
            printf("employee id:%d\n",e[i].id);
            printf("employee name:%s\n",e[i].name);
            printf("employee salary:%d\n",e[i].salary);
        }}
        return 0;
    }
    