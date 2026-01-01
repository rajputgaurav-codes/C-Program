// create a program to based on a student's score, categorize as 'high','moderate',or 'low' 
//using the ternery operator(e.r.,high for>80,moderate for 50-60,low for<50).
#include<stdio.h>
int main(){
    int marks;
    printf("enter your marks=");
    scanf("%d",&marks);
    (marks>80)?printf("High"):(marks>=50)? printf("Moderate"): printf("Low");
    return 0;
}