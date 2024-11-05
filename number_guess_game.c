#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    // genrating the random number
    srand(time(0));
    int random_number = (rand()%100)+1;
    printf("\n");
    int guess_number;

    
    int count=0; 
    do // using do loop for reapting the guesses
    // do loop is used because the condition will be checked at last
    {
        printf("guess the number : ");
        scanf("%d",&guess_number);
        count+=1; // for counting the number of gusses
        if (guess_number>random_number)
        {
            printf("lower number please\n\n");
        }
        else if (guess_number<random_number)
        {
            printf("higer number please\n\n");
        }
        else 
        {
            printf("you won !!\n\n");
            break;
        }
        
    }while ( guess_number != random_number );
    
    printf("number of guesses : %d ",count);
    return 0;
}