#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct employee {
    int emp_id;
    char emp_name[50];
    int emp_salary;
} emp;

struct organization {
    char org_name[15];
    int org_num;
    emp empdata;
};

int main() {
    struct organization org;

    printf("Enter organization name: \n");
    scanf(" %14s", org.org_name);

    printf("Enter organization number: \n");
    scanf("%d", &org.org_num);

    printf("Enter employee id: \n");
    scanf("%d", &org.empdata.emp_id);

    printf("Enter employee name: \n");
    getchar(); // Consume the newline character left in the buffer
    fgets(org.empdata.emp_name, sizeof(org.empdata.emp_name), stdin);
    org.empdata.emp_name[strcspn(org.empdata.emp_name, "\n")] = '\0';

    printf("Enter employee salary: \n");
    scanf("%d", &org.empdata.emp_salary);
    printf("\n");

    printf("Organization name: %s\n", org.org_name);
    printf("Organization number: %d\n", org.org_num);
    printf("Employee id: %d\n", org.empdata.emp_id);
    printf("Employee name: %s\n", org.empdata.emp_name);
    printf("Employee salary: %d\n", org.empdata.emp_salary);

    return 0;
}//end main
