#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber;
    int guesses;
    int no_of_guesses=0;

    // Seed the random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    randomNumber = (rand() % 100) + 1;

   do{
    printf("Guess the number = ");
    scanf("%d",&guesses);
    if(guesses>randomNumber){
        printf("Please enter the lower number!!\n");
    }
    else if(guesses<randomNumber){
        printf("Please enter the Higher number!!\n");
    }
    else{
        printf("Congrates!!\n");
    }
    no_of_guesses++;
   }while(guesses!=randomNumber);
       
       printf("You guessesed the number in %d guesses",no_of_guesses);

    return 0;
}
