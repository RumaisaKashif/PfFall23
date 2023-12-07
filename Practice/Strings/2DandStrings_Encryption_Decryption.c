//Encryption and Decryption using strings and 2D arrays

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

void Encrypt(char MessageBlock[], char Encrypted_Message[])
{
    char tempArray[5][5];
    int msgsize=0;
    while (MessageBlock[msgsize]!='\0')
    {
        msgsize++;
    }
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            if (i * 5 + j < msgsize)
            {
                tempArray[i][j]=MessageBlock[i*5+j];//imp
            }
            else
            {
                tempArray[i][j]='$';
            }
        }
    }
    int k=0;
    for (int j=0;j<5;j++)
    {
        for (int i=0;i<5;i++)
        {
            Encrypted_Message[k++]=tempArray[i][j];
            // strcpy(tempArray[i][j],Encrypted_Message[i+j]);
        }
    }
    Encrypted_Message[k]='\0';//null terminate string
}

void Decrypt(char Encrypted_Message[], char Message[])
{
    char temp[5][5];
    int k=0;
    for (int j=0;j<5;j++)
    {
        for (int i=0;i<5;i++)
        {
            temp[i][j]=Encrypted_Message[k++];
        }
    }
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            if (temp[i][j]!='$')
            {
                Message[i*5+j]=temp[i][j];
            }
            else
            {
                Message[i*5+j]='\0';
            }
        }
    }
}

int main()
{
    char MessageBlock[25];
    char Message[25];
    char Encrypted_Message[25];
    printf("Type message to be encrypted (of length<=25 characters):\n");
    scanf("%[^\n]s", MessageBlock);
    Encrypt(MessageBlock, Encrypted_Message);
    printf("Encrypted message: %s\n", Encrypted_Message);
    Decrypt(Encrypted_Message,Message);
    printf("Decrypted message: %s\n", Message);
    return 0;
}
