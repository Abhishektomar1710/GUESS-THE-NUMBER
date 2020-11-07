#include<time.h>
#include <stdio.h>
#include<conio.h>

int main()
{
    int a,b,num,n;
    printf("**********GUESS THE NUMBER GAME**********\n");
    printf(" Rules for the game-> \n ");
    printf(" You have to decared the upper bound and lower bound of numbers\n ");
    printf(" Guess the number using hints :) \n ");    
    printf(" Good luck! & enjoy XD\n ");
    printf("**************************************************************\n");
    printf("LETS START\n");
    printf("1)Enter LOWER RANGE\n ");
    scanf("%d",&a);
    printf("2)Enter UPPER RANGE\n ");
    scanf("%d",&b);
    srand(time(0));
    num=(rand()%(b-a+1))+a;//formula for new number
    
    while(1)
    {
        printf(" guess a number -:.\n ");
        scanf("%d",&n);
            if(n==num)//condition for win
            {
                printf(" ***correct guess*** \n ");
                printf(" YOU WIN\n ");
                break;
            }
            else if(n<num)//condition for grater 
            {
                printf(" THE NUMBER IS GRATER THAN %d\n " ,n);
            }
            else if(n>num)// condition for less
            {
                printf(" THE NUMBER IS LESS THAN %d\n ",n);
            }
        
    }
    
    

    return 0;
}
