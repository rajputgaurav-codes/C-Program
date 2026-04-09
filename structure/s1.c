#include<stdio.h>

struct student{
   int id;
   char name[50];
   float per;
}s[5];
int main(){
   int i;
    for(i=0;i<5;i++){
        printf("\n%d student details:\n",i+1);

        printf("enter student id:");
        scanf("%d",&s[i].id);

        printf("enter student name:");
        scanf(" %s",s[i].name);

        printf("enter student percentage:");
        scanf("%f",&s[i].per);
    }
    for(i=0;i<5;i++){
        if(s[i].per>70 && s[i].per<=100){
              printf("student id:%d\n",s[i].id);
              printf("student name:%s",s[i].name);
              printf("student percentage:%.2f",s[i].per);
        }
    }
    return 0;
}
 
    