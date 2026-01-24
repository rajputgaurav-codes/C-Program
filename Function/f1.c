//use three funtion in one program and print them.
#include<stdio.h>
void good_morning();
void good_afternoon();
void good_evening();

void good_morning(){
    printf("Good morning everyone\n");
}
void good_afternoon(){
    printf("Good afternoon everyone\n");

}
void good_evening(){
    printf("Good evening everyone\n");
}
int main(){
    good_morning();
    good_afternoon();
    good_evening();
    return 0;
}