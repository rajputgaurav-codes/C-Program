//write a program to find a character entered by user is uppercase,lowercase or digit.
#include<stdio.h>
int main(){
    char ch;
    printf("enter a character=");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'){
        printf("Uppercase");
    }else if(ch>='a'&&ch<='z'){
        printf("Lowercase");
    }
    else{
        printf("Special character");
    }
    return 0;
}