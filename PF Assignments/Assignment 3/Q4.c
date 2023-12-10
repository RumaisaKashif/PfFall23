
/*
  Programmer: Rumaisa Kashif
  Date: 6th December 2023
  Q4
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void maxEmployeeSalary(Employee employees[], int size);
void calcTotalSalariesPerDept(Employee employees[], int size);

typedef struct Employee {
    int employeeId;
    char fName[20];
    char lName[20];
    int salary;
    char joiningDate[20];
    char department[20];
} Employee;

void maxEmployeeSalary(Employee employees[], int size) 
{
    int maxSalaryIndexes[10]={-1};  
    int maxSalaries[10]={0};
    char deps[10][20];
  
    // Initialize arrays with empty strings
    for (int i=0; i<10; i++) 
    {
        strcpy(deps[i], "");
    }

    for (int i=0; i<size; i++) 
    {
        int depIndex=-1;
        for (int j=0; j<10; j++) 
        {
            if (strcmp(employees[i].department, deps[j])==0) 
            {
                depIndex = j;
                break;
            } 
            else if (strcmp(deps[j], "")==0) 
            {
                strcpy(deps[j], employees[i].department);
                depIndex=j;
                break;
            }
        }

        if (depIndex!=-1) 
        {
            // Update
            if (employees[i].salary>maxSalaries[depIndex]) 
            {
                maxSalaries[depIndex]=employees[i].salary;
                maxSalaryIndexes[depIndex]=i;
            }
        }
    }

    // Printing employee details
    printf("Details of Employees with Maximum Salary for Each Department:\n");
    for (int i=0; i<10; i++) 
    {
        if (strcmp(deps[i], "")!=0) 
        {
            if (maxSalaryIndexes[i]!=-1) 
            {
                printf("Department: %s\n", deps[i]);
                printf("Employee ID: %d\n", employees[maxSalaryIndexes[i]].employeeId);
                printf("Name: %s %s\n", employees[maxSalaryIndexes[i]].fName, employees[maxSalaryIndexes[i]].lName);
                printf("Salary: %d\n", maxSalaries[i]);
                printf("Joining Date: %s\n\n", employees[maxSalaryIndexes[i]].joiningDate);
            }
        }
    }
}

void calcTotalSalariesPerDept(Employee employees[], int size) 
{
    int totalSalaries[10]={0};
    int i, j;
    char deps[10][20];
    // Array initialisation
    for (i=0; i<10; i++) 
    {
        strcpy(deps[i], "");
    }
    // Calculating total salary per department
    for (i=0; i<size; i++) 
    {
        for (j=0; j<10; j++) 
        {
            if (strcmp(employees[i].department, deps[j])==0) 
            {
                totalSalaries[j]+=employees[i].salary;
                break;
            } 
            else if (strcmp(deps[j], "")==0) 
            {
                strcpy(deps[j], employees[i].department);
                totalSalaries[j]+=employees[i].salary;
                break;
            }
        }
    }
    // Displaying salaries and departments
    printf("\nDepartments and Total Salaries:\n");
    for (i=0; i<10; i++) {
        if (strcmp(deps[i], "") != 0) 
        {
            printf("%s - %d\n", deps[i], totalSalaries[i]);
        }
    }
}

int main() 
{
    printf("Rumaisa Kashif\n23k-0744\n");
    Employee employees[]= 
    {
        {1, "Monika", "Arora", 100000, "2014-02-20 09:00:00", "HR"},
        {2, "Niharika", "Verma", 80000, "2014-06-11 09:00:00", "Admin"},
        {3, "Vishal", "Singhal", 300000, "2014-02-20 09:00:00", "HR"},
        {4, "Amitabh", "Singh", 500000, "2014-02-20 09:00:00", "Admin"},
        {5, "Vivek", "Bhati", 500000, "2014-06-11 09:00:00", "Admin"},
        {6, "Vipul", "Diwan", 200000, "2014-06-11 09:00:00", "Account"},
        {7, "Satish", "Kumar", 75000, "2014-01-20 09:00:00", "Account"},
        {8, "Geetika", "Chauhan", 90000, "2014-04-11 09:00:00", "Admin"},
    };
    int size=sizeof(employees)/sizeof(employees[0]);
    // Function calls
    maxEmployeeSalary(employees, size);
    calcTotalSalariesPerDept(employees, size);
    return 0;
}//end main

