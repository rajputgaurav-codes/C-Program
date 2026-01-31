//decalre a pointer to a char and user it to read and print a character entered by the user.
#include<stdio.h>
int main(){
    char ch;
    char *ptr=&ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    printf("The address of the character is : %p\n",&ch);
    printf("print the character using pointer :%c\n",*ptr);

    return 0;
}