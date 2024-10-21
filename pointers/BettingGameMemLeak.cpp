//**Simple Betting Game**
//Jack Queen King - Computer shuffles these cards
//player has to guess the position of queen
//if player wins takes 3times the bet
//if lost loses the bet amount
//player has 100$ initially
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int cash = 100;
void play(int bet)
{
    char C[3] = {'J','Q', 'K'};
    // char *C = (char*)malloc(300000*sizeof(char));
    // C[0]='J';
    // C[1]='Q';
    // C[2]='K';
    printf("Shuffling ...");
    srand(time(NULL));
    int i;
    for(i=0; i<5; i++)
    {
        int x = rand() %3;
        int y = rand() %3;
        int temp = C[x];
        C[x] = C[y];
        C[y] = temp;
    }
    int PlayersGuess;
    printf("What's the position of the queen - 1, 2 or 3?");
    scanf("%d", &PlayersGuess);
    if(C[PlayersGuess-1]=='Q')
    {
        cash += 3*bet;
        printf("You win | Result - %c%c%c  Total Cash - %d\n", C[0],C[1],C[2], cash);
    }
    else
    {
        cash -= bet;
        printf("You loose | Result - %c%c%c  Total Cash - %d\n", C[0],C[1],C[2], cash);
    }
}
int main()
{
    int bet;
    while(cash>0)
    {
        printf("What's your bet? $");
        scanf("%d", &bet);
        if(bet==0 ||bet>cash)break;
        play(bet);
        printf("*************************************************\n");
    }
}