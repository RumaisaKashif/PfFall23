//recursively find sum of digits

#include <stdio.h>

int sum(int num)
{
    int sumnum=0;
    if (num/10==0)
    {
        sumnum+=num;
    }
    else
    {
        sumnum+=num%10 + sum(num/10);
    }
    return sumnum;
}

int main()
{
    int num;
    printf("ENTER NUM:\n");
    scanf("%d", &num);
    printf("%d", sum(num));
}
