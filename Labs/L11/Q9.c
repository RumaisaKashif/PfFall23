#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Register{
    int CourseId;
    char CourseName[15];
} Register; 

typedef struct Student{
    int StudentId;
    char FirstName[15];
    char LastName[15];
    char cellno[12];
    char email[30];
    Register courseinfo;
} Student; 

int main()
{
    Student arr[5];
    for (int i=0;i<5;i++)
    {
        printf("Enter student ID for student %d:\n",i+1);
        scanf("%d", &arr[i].StudentId);
        printf("Enter first name for student %d:\n",i+1);
        scanf("%s", arr[i].FirstName);
        printf("Enter last name for student %d:\n",i+1);
        scanf("%s", arr[i].LastName);
        printf("Enter cell number for student %d:\n",i+1);
        scanf("%s", arr[i].cellno);
        printf("Enter email address for student %d:\n",i+1);
        scanf("%s", arr[i].email);
        printf("Enter course id for student %d:\n",i+1);
        scanf("%d", &arr[i].courseinfo.CourseId);
        printf("Enter course name for student %d:\n",i+1);
        scanf("%s", arr[i].courseinfo.CourseName);
    }
    printf("\n\n");
    for (int i=0;i<5;i++)
    {
        printf("student ID for student %d is: %d\n",i+1,arr[i].StudentId);
        printf("first name for student %d: %s\n",i+1,arr[i].FirstName);
        printf("last name for student %d: %s\n",i+1,arr[i].LastName);
        printf("cell number for student %d: %s\n",i+1,arr[i].cellno);
        printf("email address for student %d: %s\n",i+1,arr[i].email);
        printf("course id for student %d: %d\n",i+1, arr[i].courseinfo.CourseId);
        printf("course name for student %d: %s\n",i+1,arr[i].courseinfo.CourseName);
    }
}//end main


