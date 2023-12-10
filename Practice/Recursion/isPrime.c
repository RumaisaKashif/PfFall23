//recursively find if number is prime or not

#include <stdio.h>
#include <stdbool.h>
#include <math.h>  

bool isPrime(int n, int i)
{
    if (n<=1)
    {
        return false;
    }
    else if (n==2)
    {
        return true;
    }
    else
    {
        if (n%i==0)
        {
            return false;
        }
        else
        {
            if (i < 2) 
            {
                return true;
            }
            else
            {
                return isPrime(n,i-1);
            }
        }
    }
}


int main()
{
    int num;
    printf("ENTER NUM:\n");
    scanf("%d", &num);
    int i=(int)sqrt(num)+1;
    if (!isPrime(num,i))
    {
        printf("not prime\n");
    }
    else 
    {
        printf("prime\n");
    }
}
