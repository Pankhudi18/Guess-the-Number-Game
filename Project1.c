#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number;
    int a;
    int nguesses=1;
    srand (time(0));
    number = rand()%100+1;
   

    do
    {
        printf("Guess the no. between 1 to 100\n");
        scanf("%d" , &a);

        if (a>number)
        {
            printf("Lower no. please\n");
        }
        else if (a<number)
        {
            printf("Higher no. please\n");
        }
        else 
        {
            printf("Correct, you got it\n You took %d guesses" , nguesses);
        }
        nguesses++;
        
    } while (a!=number);
    
    
    
    return 0;
}