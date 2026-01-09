//Program using +=, -=, *=, /=
#include<stdio.h>
int main(){
    int a,b;
    printf("enter the first number=");
    scanf("%d",&a);
    printf("enter the second number=");
    scanf("%d",&b);
    printf("first relational operator=%d\n",a+=b); //using +=
    printf("second relational operator=%d\n",a-=b); //using -=
    printf("third relational operator=%d\n",a*=b); //using *=
    printf("fourth relational operator=%d\n",a/=b); //using /=
    return 0;
}