//Program to print even and odd numbers in a range
#include <stdio.h>
#include <stdlib.h> // for dynamic memory allocation

void evenOdd(int num, int *evenarr, int *oddarr, int *evenCount, int *oddCount)
{
    if (num <= 0)
        return;

    if (num % 2 == 1)
    {
        oddarr[*oddCount] = num;
        (*oddCount)++;
    }
    else if (num % 2 == 0)
    {
        evenarr[*evenCount] = num;
        (*evenCount)++;
    }

    evenOdd(num - 1, evenarr, oddarr, evenCount, oddCount);
}

int main()
{
    int num;
    printf("ENTER NUM for range from 1:\n");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Please enter a positive number.\n");
        return 1; // Exit with an error code
    }

    int *evenarr = (int *)malloc(num * sizeof(int));
    int *oddarr = (int *)malloc(num * sizeof(int));

    if (evenarr == NULL || oddarr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }

    int evenCount = 0, oddCount = 0;
    evenOdd(num, evenarr, oddarr, &evenCount, &oddCount);

    printf("Odd numbers:\n");
    for (int i = 0; i < oddCount; i++)
    {
        printf("%d ", oddarr[i]);
    }

    printf("\nEven numbers:\n");
    for (int i = 0; i < evenCount; i++)
    {
        printf("%d ", evenarr[i]);
    }

    free(evenarr);
    free(oddarr);

    return 0;
}
