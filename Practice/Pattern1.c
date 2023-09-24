//  nested loop
//  Created by Rumaisa Kashif on 24/09/2023.

#include <stdio.h>

int main()
{
    char ch;
    int num;
    printf("program to print pattern using nested loops\n");
    for (ch='C'; ch>='A'; ch--)
    {
        for (num=1; num<=7; num++)
        {
            if (num%2!=0)
            {
                printf("%c%d",ch, num);
                printf("\t");
            }
        }
        printf("\n");
    }
}
