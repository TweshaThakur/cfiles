//program will generate a num from 0 to 20
// user will guess in 5 tries the  num generated

#include <stdio.h>
#include <stdlib.h>
#include <time.h> //for random number generator seed


int main()
{
    int guess=5;
    int randomNumber=0;
    int NumofGses=0;
    time_t t;

    //initialization of random number generator

    srand((unsigned) time(&t));

    //get the random number
    randomNumber=rand()%21;

    printf("\nThis is a guessing game.");
    printf("\nI have chosen a number between 0 and 20, which you must guess. \n");

    for(NumofGses=5; NumofGses>0;--NumofGses)
    {
        printf("\nYou have %d tr%s left.",NumofGses,NumofGses==1? "y":"ies");
        printf("\nEnter a guess: ");
        scanf("%d",&guess);

        if (guess==randomNumber)
        {
            printf("\nCongratulations you guessed it!!!");
            return;

        }
        else if(guess<0 || guess>20) //checking for invalid guess
            printf("I said the number is between 0 and 20.\n");

        else if(randomNumber>guess)
            printf("Sorry %d is wrong. My number is greater than that...\n",guess);
        else if (randomNumber<guess)
            printf("Sorry %d is wrong. My number is smaller than that...\n",guess);

    }

    printf("\nYou have had five tries and failed. The number was %d\n",randomNumber);


    return 0;
}
