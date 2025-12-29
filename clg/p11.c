/*write a program thar input two number display of both summation .
 if summation is odd display square of 1st number if summation is even display sqare of scond number.*/
 #include<stdio.h>
 int main(){
    int a,b,sum;
    printf("entera first number=");
    scanf("%d",&a);
    printf("entera second number=");
    scanf("%d",&b);
    sum=a+b;
    printf("\nSum=%d",sum);
    if(sum%2==1){
        printf("\n%d",a*a);
    }else{
        printf("\n%d",b*b);
    }
    return 0;

 }