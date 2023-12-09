/*
Programmer: Rumaisa Kashif
Date: 6th December 2023
Q2
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define numDepts 4
#define numRoles 5
#define numEmployees (numDepts * numRoles)

// Employee data structure
typedef struct employee {
    char name[30];
    char role[20];
    int communication;
    int teamwork;
    int creativity;
} employee;

// Department structure
typedef struct Department {
    char name[20];
    employee employees[numRoles];
    char* namePool[20];
} department;

// Function for random name assignment
void randomNameGen(char* namePool[], char* name) {
    int index = rand() % 20;
    strcpy(name, namePool[index]);
    namePool[index] = namePool[19];
}

// Function to initialize attributes for an employee
void attributeIn(employee* employee, char* name, char* role) 
{
    strcpy((*employee).name, name);
    strcpy((*employee).role, role);
    (*employee).communication=rand()%100+1;
    (*employee).teamwork=rand()%100 +1;
    (*employee).creativity=rand()%100+1;
}

int main() 
{
    // Seeding
    srand(time(NULL));

    // Departments and roles
    char* departments[]={"HR", "Finance", "Marketing", "Logistics"};
    char* roles[]= {"Director", "Executive", "Manager", "Employee", "Trainee"};

    // Array of departments
    department deparr[numDepts];

    // Initialize employees for each department
    for (int i=0; i<numDepts; i++) 
    {
        strcpy(deparr[i].name, departments[i]);
        // Initialize name pool for each department
        char* namePool[] = {"Umaymah", "Divya", "Laaiba", "Zainab", "Ibrahim", "Shahiq", "Reyan", "Shariq", "Sameer", "Sana",
                            "Mishka", "Maryam", "Amna", "Areej", "Farough", "Fauzaan", "Namira", "Maneeha", "Maier", "Javeria"};
        memcpy(deparr[i].namePool, namePool, sizeof(namePool));
        for (int j = 0; j < numRoles; j++) 
        {
            char name[30];
            randomNameGen(deparr[i].namePool, name);
            attributeIn(&deparr[i].employees[j], name, roles[j]);
        }
    }
    // Compute the sum of values for each department
    int depsums[numDepts] = {0};
    for (int i = 0; i < numDepts; i++) 
    {
        for (int j = 0; j < numRoles; j++) 
        {
            depsums[i]+=deparr[i].employees[j].communication+                          deparr[i].employees[j].teamwork+                          deparr[i].employees[j].creativity;
        }
    }
    // Find the best department
    int bestDepartmentIndex = 0;
    int maxSum = depsums[0];

    for (int i=1; i<numDepts; i++)
    {
        if (depsums[i]>maxSum) 
        {
            maxSum=depsums[i];
            bestDepartmentIndex=i;
        }
    }
    // Print details of the best department in tabular form
    printf("%-12s%-12s%-15s%-15s%-15s%-15s\n", "Department", "Role", "Name", "Communication", "Teamwork", "Creativity");
    for (int j=0; j<numRoles; j++) 
    {
        printf("%-12s%-12s%-15s%-15d%-15d%-15d\n",
               deparr[bestDepartmentIndex].name,
               deparr[bestDepartmentIndex].employees[j].role,
               deparr[bestDepartmentIndex].employees[j].name,
               deparr[bestDepartmentIndex].employees[j].communication,
               deparr[bestDepartmentIndex].employees[j].teamwork,
               deparr[bestDepartmentIndex].employees[j].creativity);
    }
    // Print the sum of values for each department
    printf("\nSum of Atrribute Values for Each Department:\n");

    for (int i=0; i<numDepts; i++) 
    {
        printf("%-12s: %d\n", deparr[i].name, depsums[i]);
    }
    // Print the best department
    printf("\nBest Department: %s\n", deparr[bestDepartmentIndex].name);
    return 0;
}

