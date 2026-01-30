//print the palindrom number using palindrom.
#include<stdio.h>
int reverse(int num,int rev);

int reverse(int num,int rev){
    if(num==0){
        return rev;
    }
   int reminder=num%10;
   int new_num=num/10;
   int new_rev=rev*10+reminder;
   return reverse(new_num,new_rev);
   
}

int main(){
    int num;
    printf("enter a number :");
    scanf("%d",&num);
    int rev=reverse(num,0);
    if(rev==num){
        printf("This is Palindrom number");
    }
    else {
        printf("This is not palindrom number");
    }
    return 0;
}