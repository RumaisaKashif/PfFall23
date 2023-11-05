/*
 Programmer: Rumaisa Kashif
 Date: 4/10/2023
 Desc: Tic-tac-toe
 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    char pos;
    char arr[3][3]={
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}
    };
    bool gridFilled=false;
    
    while (!gridFilled)
    {
        printf("enter a digit on the following grid to choose your position:\n");
        for (int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                printf("%c\t",arr[i][j]);
            }
            printf("\n");
        }
        scanf(" %c", &pos);
        
        for (int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                if (pos==arr[i][j])
                {
                    arr[i][j]='X';
                    break;
                }
            }
        }
//        srand(time(NULL));
//        char lower_limit = '1';
//        char upper_limit = '9';
//        char randPos;
//        
//        do {
//            randPos = lower_limit + rand() % (upper_limit - lower_limit + 1);
//        } while (randPos != 'X' && randPos != 'O');
//
//        char randPos= lower_limit + rand() % (upper_limit - lower_limit + 1);
//
//        for (int i=0;i<3;i++)
//        {
//            for (int j=0;j<3;j++)
//            {
//                if (arr[i][j]!='O' && arr[i][j]!='X')
//                {
//                    if (randPos==arr[i][j])
//                    {
//                        arr[i][j]='O';
//                        break;
//                    }
//                }
//            }
//        }
        
        //computer's name
        srand(time(NULL));
        char randPos;
        bool validMove = false;
        while (!validMove) {
        randPos = '1' + rand() % 9;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (randPos == arr[i][j]) {
                    arr[i][j] = 'O';
                    validMove = true;
                    break;
                }
            }
            if (validMove) {
            break;
        }
    }
    }
        
        int x,o;
        //horizontal check
        for (int i=0;i<3;i++)
        {
            x=0;o=0;
            for (int j=0;j<3;j++)
            {
                if (arr[i][j]=='X')
                {
                    x++;
                }
                else if (arr[i][j]=='O')
                {
                    o++;
                }
            }
            if (x==3)
            {
                printf("player won!\n");
                return 0;
            }
            else if (o==3)
            {
                printf("computer won!\n");
                return 0;
            }
        }
        
        //vertical check
        int xv,ov;
        
        for (int j=0;j<3;j++)
        {
            xv=0;
            ov=0;
            for (int i=0;i<3;i++)
            {
                if (arr[i][j]=='X')
                {
                    xv++;
                }
                else if (arr[i][j]=='O')
                {
                    ov++;
                }
            }
            if (xv==3)
            {
                printf("player won!\n");
                return 0;
            }
            else if (ov==3)
            {
                printf("computer won!\n");
                return 0;
            }
        }
    
        //south east diagonal check
        int xd1=0,od1=0;
        for (int i=0;i<3;i++)
        {
            if (arr[i][i]=='X')
            {
                xd1++;
            }
            else if (arr[i][i]=='O')
            {
                od1++;
            }
        }
        
        if (xd1==3)
        {
            printf("player won!\n");
            return 0;
        }
        else if (od1==3)
        {
            printf("computer won!\n");
            return 0;
        }
        //south west diagonal check
        int xd2=0,od2=0;
        for (int i=0;i<3;i++)
        {
            int j=2-i;
            if (arr[i][j] == 'X')
            {
                xd2++;
            }
            else if (arr[i][j] == 'O')
            {
                od2++;
            }
        }
        if (xd2==3)
        {
            printf("player won!\n");
            return 0;
        }
        else if (od2==3)
        {
            printf("computer won!\n");
            return 0;
        }
        gridFilled=true;
        for (int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                if (arr[i][j]!='X' && arr[i][j]!='O')
                {
                    gridFilled=false;
                }
            }
        }
    }
    return 0;
}//end main
