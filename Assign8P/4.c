#include <stdio.h>
#include <string.h>

typedef struct salary
{   
    int basicSalary;
    int da;
    int hra;
} s;

typedef struct Employee {
    int emp_id;
    char name[100];
    s salary;
} emp;

int main() {
    emp emp1;
    printf("Employee Id: ");
    scanf("%d", &emp1.emp_id);
    getchar();    
    printf("Employee Name: ");
    fgets(emp1.name,100,stdin);
    emp1.name[strcmp(emp1.name, "\n")] = 0;
    printf("Basic Salary: ");
    scanf("%d", &emp1.salary.basicSalary);
    printf("Da: ");
    scanf("%d", &emp1.salary.da);
    printf("Hra: ");
    scanf("%d", &emp1.salary.hra);

    printf("The Gross Salary of the employee name %s having employee id as %d is: %d \n", emp1.name, emp1.emp_id, (emp1.salary.basicSalary+emp1.salary.da+emp1.salary.hra));
}