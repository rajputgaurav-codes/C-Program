//Program to check Vowel or Consonant
#include<stdio.h>
int main(){
    char c;
    printf("enter a charackter:");
    scanf("%c",&c);
    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='O'||c=='o'||c=='u'||c=='U'){
        printf("VOWEL");
    }
    else{
        printf("CONSONENT");
    }
    return 0;
}