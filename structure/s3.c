/*Write a program to create a structure of five students with a member name, roll no, 
3 subject marks calculate total and percentage. Display student’s details in 
descending order on marks.*/
#include<stdio.h>
struct student{
    char name[20];
    int rollno;
    int sub1,sub2,sub3;
    int total;
    float per;
} s[5],temp;

int main(){
    for(int i=0;i<5;i++){
    printf("Enter the %d student details\n",i+1);
    printf("Name : ");
    scanf(" %s",s[i].name);
    printf("Roll no : ");
    scanf("%d",&s[i].rollno);
    printf("sub 1 marks :");
    scanf("%d",&s[i].sub1);
    printf("sub 2 marks :");
    scanf("%d",&s[i].sub2);
    printf("sub 3 marks :");
    scanf("%d",&s[i].sub3);
     s[i].total=s[i].sub1+s[i].sub2+s[i].sub3;
     printf("Total marks : ",s[i].total);
     s[i].per=s[i].total/300.0*100;
     printf("Percentage : %.2f",s[i].per);
    }
    for(int i=0;i<4;i++){
      for(int j=i+1;j<5;j++){
        if(s[i].total<s[j].total){
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
      }

    }

    for(int i=0;i<5;i++){
        printf("print the %d student details\n",i+1);
        printf("Name : %s",s[i].name);
        printf("rollno : %d",s[i].rollno);
        printf("Sub 1 : %d",s[i].sub1);
        printf("Sub 2 : %d",s[i].sub2);
        printf("Sub 3 : %d",s[i].sub3);
        printf("Total marks : %d",s[i].total);
        printf("Percentage : %d",s[i].per);

    }
    return 0;
}