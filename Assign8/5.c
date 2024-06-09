#include <stdio.h>

struct Student {
    char name[50];
    int age;
    int totalMarks;
};

void displayStudent(struct Student stu) {
    printf("Name: %s, Age: %d, Total Marks: %d\n", stu.name, stu.age, stu.totalMarks);
}

int main() {
    struct Student students[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Total Marks: ");
        scanf("%d", &students[i].totalMarks);
    }

    printf("\nStudent Information:\n");
    for (int i = 0; i < 3; i++) {
        displayStudent(students[i]);
    }

    return 0;
}

