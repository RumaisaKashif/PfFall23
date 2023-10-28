/*
 Programmer: Rumaisa Kashif
 Date: 18/10/23
 Desc: character maze
 */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char maze[5][5] = {
        {'S', 'O', 'O', 'W', 'W'},
        {'O', 'W', 'O', 'O', 'W'},
        {'O', 'O', 'O', 'W', 'O'},
        {'W', 'W', 'O', 'W', 'O'},
        {'W', 'W', 'O', 'E', 'W'} };
    printf("0,0\n");
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            if (maze[i+1][j]=='O')
            {
                printf("%d,%d\n", i+1,j);
                if(maze[i+1][j+1]=='E')
                {
                    printf("%d,%d\n", i+1,j+1);
                    printf("you have reached the end of the maze!\n");
                    exit;
                }
                if (maze[i+2][j]!='O')
                {
                    if (maze[i+1][j+1]=='O')
                    {
                        printf("%d,%d\n",i+1, j+1);
                        if (maze[i+2][j+1]!='O')
                        {
                            if (maze[i+1][j+2]=='O')
                            {
                                printf("%d,%d\n", i+1,j+2);
                            }
                        }
                            
                    }
                }
                break;
            }
        }
    }
}//end main
