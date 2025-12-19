//write a program that input three subject marks and display total marks with percentage;
#include<stdio.h>
int main ()
{
    int m1,m2,m3;
    float per;
    printf("Enter first subject marks ");
    scanf(" %d",&m1);
    printf("\nEnter second subject marks ");
    scanf(" %d",&m2);
    printf("\nEnter third subject marks ");
    scanf(" %d",&m3);
printf("Total Marks optaion %d\n",m1+m2+m3);
per=m1+m2+m3/3*100;
printf("percentage %f ",per );
return 0;
}