//Programmer: Rumaisa Kashif
//Date: 14/10/23
//Desc: find sum of diagonal elements of square matrix
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
    int sum=0;
    for (int i=0;i<num;i++)
    {
        for (int j=0;j<num;j++)
        {
            if (j==i)
            {
                sum+=arr[i][j];
            }
        }
    }
    printf("sum of elements of diagonal is: %d\n", sum);
    return 0;
}//end main
