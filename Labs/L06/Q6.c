//Rumaisa Kashif
//23K0744
//Program for the 21 matchstick game
#include <stdio.h>

int main() 
{
    printf("Lets play a matchstick game!\n");
    char p;
    printf("Player starts the game!\n");
    int sum=21;
    while (1)//while sum is not 1, the loop runs 
    {
        int n;
        int c=0;//c has to be reset after every roung
        printf("Enter the number of matchsticks you would pick (1-4):\n");
        scanf("%d", &n);
        sum=sum-n;
        printf("number of matchsticks left:%d\n", sum);
        c=5-n;//for the computer to always win, the sum of matchsticks picked in any one round should be 5
        sum=sum-c;
        printf("now its the computer's turn\n");
        printf("the computer picked %d matchsticks\n", c);
        printf("now the number of matchsticks left is:%d\n", sum);
        if (sum==1)
        {
            printf("player has to pick last matchstick so computer wins\n");
            break;//exit while loop once 1 matchstick left after the computer has played its turn
        }
    }//end while
}//end main
