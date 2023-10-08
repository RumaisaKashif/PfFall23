//5 4 3 2 1
// 4 3 2 1
//  3 2 1
//   2 1
//    1
//Print the above pattern

#include <stdio.h>
int main()
{
    printf("enter number of rows needed:\n");
    int rows;
    scanf("%d", &rows);
    int i;
    int j;
    int spaces;
    for(i=rows; i>0; i--)
    {
        for (spaces=rows-i; spaces>0; spaces--)
        {
            printf(" ");
        }
        for (j=i; j>0; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
