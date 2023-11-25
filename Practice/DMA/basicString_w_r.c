/*
Programmer: Rumaisa Kashif
Date: 25/11/23
Description: String read and print
*/
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n = 100;
    char* string;
    string = (char*)malloc(n * sizeof(char));

    if (string == NULL) 
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    scanf("%[^\n]s", string);

    int i = 0;
    while (*(string + i) != '\0')
    {
        printf("%c", *(string + i));
        i++;
    }

    free(string);

    return 0;
}//end main
