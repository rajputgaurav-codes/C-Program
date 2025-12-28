//write a program that input three number display smallest number.
#include<stdio.h>
int main(){
    int a,b,c;
      printf("enter first number=");
      scanf("%d",&a);
      printf("enter second number=");
      scanf("%d",&b);
      printf("enter third number=");
      scanf("%d",&c);
      //smallest number check.
      if(a<b&&a<c){
        printf("Smallest number=%d",a);
      }else if(b<a&&b<c){
        printf("Smallest number=%d",b);
      }else if(c<a&&c<b){
        printf("Smallest number=%d",c);
      } 
      //equality check.
      else if(a==b&&b==a){
        printf("The number are equal number=%d",a);
      }else if(b==c&&c==b){
        printf("The number are equal number=%d",b);
      }else if(a==c&&c==a){
        printf("the number are equal=%d",c);
      }
      return 0;
}