/*
Programmer: Rumaisa Kashif
Date: 6th December 2023
Q3
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void amalgamateWrite();

int main()
{
    int recordID;
    printf("Enter Record ID: ");
    scanf("%d", &recordID);
    amalgamateWrite(recordID);
    printf("Details merged and added to Combine.txt successfully.\n");
    return 0;
}

void amalgamateWrite(int recordID)
{
    FILE *personalFile, *departmentFile, *combinedFile;

    // Opening personal file to read
    personalFile=fopen("Personal.txt", "r");
    if (personalFile==NULL)
    {
        printf("Personal file did not open. Abort.\n");

        return;
    }

    // Opening department file to read
    departmentFile=fopen("Department.txt", "r");
    if (departmentFile==NULL)
    {
        printf("Department file did not open. Abort.\n");
        fclose(personalFile);
        return;
    }

    // Opening combined file to append
    // Opening personal file to read
    combinedFile=fopen("Combine.txt", "a");
    if (combinedFile==NULL)
    {
        printf("Combined file did not open. Abort.\n");
        fclose(personalFile);
        fclose(departmentFile);
        return;
    }

    int personalID, departmentID, salary;
    char name[50];
    // Finding name and personal id to match record id
    while (fscanf(personalFile,"%d %s", &personalID, name)!= EOF)
    {
        if (personalID==recordID)
        {
            break;
        }
    }
    while (fscanf(departmentFile,"%d %d", &departmentID, &salary)!= EOF)
    {
        if (departmentID==recordID)
        {
            fprintf(combinedFile, "%d %s %d\n", recordID, name, salary);
            break;
        }
    }
    fclose(personalFile);
    fclose(departmentFile);
    fclose(combinedFile);
}
