#include <stdio.h>

struct Address {
    char street[50];
    char city[50];
    char state[50];
};

struct Employee {
    int emp_id;
    char name[50];
    char designation[50];
    struct Address address;
    float basic_salary;
    float da;
    float hra;
    float gross_salary;
};

int main() {
    struct Employee employees[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter details for employee %d\n", i + 1);
        printf("Emp ID: ");
        scanf("%d", &employees[i].emp_id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Designation: ");
        scanf("%s", employees[i].designation);
        printf("Street: ");
        scanf("%s", employees[i].address.street);
        printf("City: ");
        scanf("%s", employees[i].address.city);
        printf("State: ");
        scanf("%s", employees[i].address.state);
        printf("Basic Salary: ");
        scanf("%f", &employees[i].basic_salary);
        printf("DA: ");
        scanf("%f", &employees[i].da);
        printf("HRA: ");
        scanf("%f", &employees[i].hra);

        employees[i].gross_salary = employees[i].basic_salary + employees[i].da + employees[i].hra;
    }

    printf("\nEmployee Details and Gross Salary:\n");
    for (int i = 0; i < 3; i++) {
        printf("Emp ID: %d, Name: %s, Designation: %s, Address: %s, %s, %s, Gross Salary: %.2f\n", 
               employees[i].emp_id, employees[i].name, employees[i].designation, 
               employees[i].address.street, employees[i].address.city, employees[i].address.state, 
               employees[i].gross_salary);
    }

    return 0;
}
