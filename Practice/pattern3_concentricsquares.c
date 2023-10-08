//concentric squares
//observations:
//1. 2n-1 numbers on the outskirts as viewed from any one side hence same no of rows
//npte: the value at any one position in the square is the min of rows, columns, 2n-rows and 2n-columns
//2. if n=4, we have 7 rows and 7 columns
//3. if n=4 first row: 1 1 1 1 1 1 1
//4.        secondrow: 1 2 2 2 2 2 1
//5.        third row: 1 2 3 3 3 2 1
//6.        fourthrow: 1 2 3 4 3 2 1
//7. repeat rows 1-3

#include <stdio.h>
int main()
{
    int num;
    printf("enter max number:\n");
    scanf("%d", &num);
    int c;
    int r;
    int i=num;
    for (r=2*i-1; r>0; r--)
    {
        int min=99999;
        for (c=2*i-1; c>0; c--)
        {
            int arr[4]={r, c, 2*i-r, 2*i-c};
            int j;
            int min=9999999;
            for (j=0; j<4; j++)//using loop and array to find the minimum value
            {
                if (arr[j]<min)
                {
                    min=arr[j];
                }
            }
            printf("%d ", min);//printing each value
        }
        printf("\n");//next row
    }
}
