//Program using +=, -=, *=, /=
#include<stdio.h>
int main(){
    int a,b;
    printf("enter the first number=");
    scanf("%d",&a);
    printf("enter the second number=");
    scanf("%d",&b);
    printf("first Assignment operator=%d\n",a+=b); //using +=
    printf("second Assignment operator=%d\n",a-=b); //using -=
    printf("third Assignment operator=%d\n",a*=b); //using *=
    printf("fourth Assignment operator=%d\n",a/=b); //using /=
    return 0;
}