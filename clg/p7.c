//write a program that input marks of 3 subject. display total marks,percentage and grade.
#include<stdio.h>
 int main(){
   int a,b,c;
   float per;
     printf("enter first subject marks=");
     scanf("%d",&a);
     printf("enter second subject marks=");
     scanf("%d",&b);
     printf("enter third subject marks=");
     scanf("%d",&c);
     printf("\nTotal marks=%d",a+b+c);
     per=(a+b+c/3);
     printf("\nPercentage of marks=%f",per);
      if(per>90 && per<=100){
        printf("\nGrade=A+");
      }else if(per>80 && per<=90){
        printf("\nGrade=A");
      }else if(per>60 && per<=80){
        printf("\nGrade=C");
      }else if(per>30 && per<=60){
        printf("\nGrade=Pass");
      }else{
        printf("\nFail");
      }
      return 0; 
 }
 
  