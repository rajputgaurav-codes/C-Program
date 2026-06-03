/*Write a C program to create a structure employee with a member employee ID, 
employee name, and basic salary. Read employee information from the user and 
calculate net salary where net salary = basic salary + HRA + DA - PF. HRA is 10% 
of the basis salary, DA is 50% of basic salary and PF is 20% of basic salary.*/
#include<stdio.h>
struct employee{
    int id;
    char name[50];
    float basicsalary;
    float netsalary;
}e;
int main(){
    printf("enter a employee id : ");
    scanf("%d",&e.id);
    printf("enter employee name : ");
    scanf(" %s",e.name);
    printf("enter employee basic salary : ");
    scanf("%f",&e.basicsalary);
    float HRA= 0.10*e.basicsalary;
    float DA=0.50*e.basicsalary;
    float PF=0.20*e.basicsalary;
    e.netsalary=e.basicsalary+HRA+DA-PF;
    printf("\nEmployee details\n");
    printf("Employee id: %d\n",e.id);
    printf("Employee name: %s\n",e.name);
    printf("Employee Basic Salary: %f\n",e.basicsalary);
    printf("HRA: %f\n",HRA);
    printf("DA:%f \n",DA);
    printf("PF: %f\n",PF);
    printf("Employee net salary: %f\n",e.netsalary);
    return 0;
}