#include <stdio.h>
#include <string.h>

void removeChar(char* str, int index, int size) 
{
    if (index >= 1 && index <= size) 
    {
        for (int i = index - 1; i < size - 1; i++) 
        {
            str[i] = str[i + 1];
        }
        str[size - 1] = '\0';
    }
}

int main() {
    char colours[] = "yyybbbbyyy";
    int size = strlen(colours);
    int indy, indb;
    int i = 1;

    while (i) 
    {
        indy = 0;
        indb = 0;

        printf("Yasir's turn!\n");
        printf("Enter index of string: \n");
        scanf("%d", &indy);

        if (colours[indy - 1] == 'y' && colours[indy + 1] == 'y') 
        {
            removeChar(colours, indy, size);
            printf("Yasir removes the piece 'y' at index %d, colours='%s'\n", indy, colours);
        }

        int y_moves_remaining = 0;

        for (int i = 0; i < size - 2; i++) 
        {
            if (colours[i] == 'y' && colours[i + 2] == 'y' && colours[i + 2]=='y') {
                y_moves_remaining = 1;
                break;
            }
        }

        if (!y_moves_remaining) 
        {
            printf("Yasir has no other moves, so Beenish wins.\n");
            i = 0;
            break;
        }

        printf("Beenish's turn now!\n");
        printf("Enter index of string: \n");
        scanf("%d", &indb);

        if (colours[indb - 1] == 'b' && colours[indb + 1] == 'b') 
        {
            removeChar(colours, indb, size);
            printf("Beenish removes the piece 'b' at index %d, colours='%s'\n", indb, colours);
        }

        int b_moves_remaining = 0;

        for (int i = 0; i < size - 2; i++) 
        {
            if (colours[i] == 'b' && colours[i + 2] == 'b' && colours[i + 1]=='b') {
                b_moves_remaining = 1;
                break;
            }
        }

        if (!b_moves_remaining) 
        {
            printf("Beenish has no other moves, so Yasir wins.\n");
            i = 0;
        }
    }
    return 0;
}//end main
