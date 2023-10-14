//Programmer: Rumaisa Kashif
//Date: 12/10/23
//Desc: Search for a specific element in a 2D array and return its position.

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num,row,col;
    printf("enter number of rows and columns:\n");
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            printf("enter element for row %d and col %d:\n",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("enter element to be found:\n");
    scanf("%d", &num);
    int i;
    bool flag;
    flag=false;
    for (i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            if (num==arr[i][j])
            {
                printf("match found!\n");
                printf("element found in row %d and column %d\n", i+1,j+1);
                flag=true;
                break;
            }
        }
    }
    if (!flag)
    {
        printf("-1\n");
    }
}//end main
