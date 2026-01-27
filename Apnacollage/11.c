//print palindorom num or not
#include<stdio.h>
int main(){
    int num,reminder,rev=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    int original=num;
    while(num!=0){
        reminder=num%10;
        rev=rev*10+reminder;
        num=num/10;

    }
    if(original==rev){
        printf("Pelindrom number");
    }
    else{
        printf("Not Pelindrom number");
    }
    return 0;

}