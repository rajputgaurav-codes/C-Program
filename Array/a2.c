/*Given array of marks of students, 
if the marks of any student is less than 35 print its roll number.
[roll number here referse to the index of the array.]*/
#include<stdio.h>
int main(){
    int marks[10]={98,67,45,25,97,14,54,32,75,31};
    for( int i=0;i<10;i++){
        if(marks[i]<35){
            printf("%d  ",i);
        }
    }
    return 0;
}