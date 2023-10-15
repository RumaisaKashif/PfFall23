//Programmer: Rumaisa Kashif
//Date: 12/10/23
//Desc: type of series checker
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[100000];
    int c=0;
    printf("enter elements below, enter -9999 to stop giving input.\n");
    while (1)
    {
        printf("enter element no. %d: ", c+1);
        scanf("%d", &arr[c]);
        if (arr[c]==-9999)
        {
            break;
        }
        c=c+1;
    }
    bool arith=true;
    bool geo=true;
    bool fib=true;
    if (c>3)
    {
        int d=arr[1]-arr[0];
        int r=arr[1]/arr[0];
        for (int i=2;i<c;i++)
        {
            if (arr[i]!=arr[i-1]+d)
            {
                arith=false;
            }
            if (arr[i]/arr[i-1]!=r)
            {
                geo=false;
            }
            if (arr[i]!=arr[i-1]+arr[i-2])
            {
                fib=false;
            }
        }
        if (arith)
        {
            printf("this is an arithmetic series!\n");
        }
        else if (geo)
        {
            printf("this is a geometric series!\n");
        }
        else if (fib)
        {
            printf("this is a fibonacci series!\n");
        }
        else 
        {
          printf("elements don't form any series!\n");
        }
    }
    else//less than 3 elements cannot form series
    {
        printf("insufficient number of elements input!\n");
    }
}//end main
