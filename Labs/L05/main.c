//program to make calculator on c
#include <stdio.h>
#include <math.h>

int main()
{
    printf("lets use a simple calculator!\n ");
    printf("enter an operation of choice from the following: +\t-\t*\t/\n");
    char o;
    scanf("%c", &o);
    printf("enter number 1 and number 2\n");
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    int res;
    switch (o)
    {
        case '+':
            res=n1+n2;
            printf("%d \n", res);
            break;
        case '-':
            res=n1-n2;
            printf("%d \n", res);
            break;
        case '*':
            res=n1*n2;
            printf("%d \n", res);
            break;
        case '/':
            res=n1/n2;
            printf("%d \n", res);
            break;
        default:
            printf("wrong operator chosen, please review\n");
            
    }
}
