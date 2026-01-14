//Program to check alphabet, digit or special character
#include<stdio.h>
int main(){
    char ch;
    printf("enter a value=");
    scanf("%c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
        printf("Alphabet");
    }else if(ch>=0&&ch>=9){
        printf("digit");
    }else{
        printf("special character");
    }
    return 0;

}