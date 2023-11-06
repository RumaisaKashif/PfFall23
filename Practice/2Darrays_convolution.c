/*
Programmer: Rumaisa Kashif
Date: 5/11/2023
Desc: Matrix convolution
*/

#include <stdio.h>

int main() 
{
    int input[5][5] = {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5}
    };

    int filter[3][3] = {
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1}
    };

    int result[3][3];
    
    for (int i=0; i<3; i++) 
    {
        for (int j=0; j<3; j++) 
        {
            int sum= 0;
            for (int x=0; x<3; x++) 
            {
                for (int y=0; y<3; y++) 
                {
                    sum+=input[i + x][j + y]*filter[x][y];
                }
            }
            result[i][j]=sum;
        }
    }

    printf("Result of Convolution:\n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}//end main
