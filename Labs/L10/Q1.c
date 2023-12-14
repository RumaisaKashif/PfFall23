#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

// Universal function to print different arrays
void printArray(void* arr, int size, char type) 
{
    int i;
    switch(type) 
    {
        case 'i':
            for (i = 0; i < size; i++) 
            {
                printf("%d, ", ((int*)arr)[i]);
            }
            break;

        case 'c':
            for (i = 0; i < size; i++) 
            {
                printf("%c, ", ((char*)arr)[i]);
            }
            break;

        case 'f':
            for (i = 0; i < size; i++) 
            {
                printf("%f, ", ((float*)arr)[i]);
            }
            break;

        default:
            break;
    }
    printf("\n");
}

int main() 
{
    // Declare and initialize diffferent types of arrays
    int a[10] = {0};
    char c[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    float f[10] = {0};

    // Print arrays by calling function
    printf("Array of integers: ");
    printArray(a, MAX_SIZE, 'i');

    printf("Array of characters: ");
    printArray(c, MAX_SIZE, 'c');

    printf("Array of floats: ");
    printArray(f, MAX_SIZE, 'f');

    return 0;
}//end main
