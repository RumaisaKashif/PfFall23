//Rumaisa Kashif 23k0744
//code to print sum of squares of n integers
#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    printf("lets find sum of squares of n numbers!\n");
    printf("enter a number n which is grater than 0 but less than 100:\n");
    scanf("%d", &n);
    int array[n];
    int c=0;
    while (c<n)
    {
        printf("enter integer:\n");
        scanf("%d", &array[c]);
        c=c+1;
    }
    c=0;
    int sum=0;
    while (c<n)
    {
        sum=sum+array[c]*array[c];
        c=c+1;
    }
    printf("%d", sum);
    return 0;
}
