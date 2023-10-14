//Programmer: Rumaisa Kashif
//Date: 12/10/23
//Desc: find transpose of square matrix
#include <stdio.h>

int main()
{
    int num;
    printf("enter size of side:\n");
    scanf("%d", &num);
    int arr[num][num];
    for (int i=0;i<num;i++)
    {
        for (int j=0;j<num;j++)
        {
            printf("enter element for row %d and col %d:\n",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    int tra[num][num];
    for (int i=0;i<num;i++)
    {
        for (int j=0;j<num;j++)
        {
            tra[i][j]=arr[j][i];
        }
    }
    for (int i=0;i<num;i++)
    {
        for (int j=0;j<num;j++)
        {
            printf("%d\t", tra[i][j]);
        }
        printf("\n");
    }
}//end main
