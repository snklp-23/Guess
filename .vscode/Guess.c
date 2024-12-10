#include <Stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int randomNumber;
    int userNumber;
    int guesses = 0;
    int max = 50;
    int min = 40;

    srand(time(NULL));

    randomNumber = (rand() % (max-min+1)) + min;
    //
    // printf("%d", randomNumber);
    printf("welcome to guess game ");
    printf("\n");

    do
    {
        printf("enter the number : ");
        scanf("%d", &userNumber);

        if (randomNumber > userNumber)
        {
            printf("slightly greater then random number %d\n ", userNumber);
            printf("try again\n");
        }
        else if (randomNumber < userNumber)
        {
            printf("slightly smaller then random number %d\n ", userNumber);
        }

        guesses++;
    } while (userNumber != randomNumber);
    {
        printf("%d is your randomNumber\n", randomNumber);
        printf("you guessed is correct %d\n  ", userNumber);
        printf("you guess right in  %d guesses ", guesses);
    }
    return 0;
}