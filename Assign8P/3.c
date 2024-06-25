#include <stdio.h>
#include <string.h>

typedef struct Student {
    char name[100];
    int age;
    int total_marks;
} st ;

int main() {
    st st1;
    printf("Enter the Details of student 1 \n");
    printf ("Name: ");
    fgets(st1.name,100,stdin);
    st1.name[strcspn(st1.name, "\n")] = 0;
    printf ("Age: ");
    scanf("%d", &st1.age );
    getchar(); // consume newline character
    printf("Total Mark: ");
    scanf("%d", &st1.total_marks);
    getchar(); // consume newline character

    st st2;
    printf("Enter the details of second student: \n");
    printf("Name: ");
    fgets(st2.name, 100,stdin);
    st2.name[strcspn(st2.name, "\n")] = 0;
    printf("Age: ");
    scanf("%d", &st2.age);
    getchar(); // consume newline character
    printf("Total Marks: ");
    scanf("%d", &st2.total_marks);
    getchar(); // consume newline character

    st st3;
    printf("Enter the details of third student: \n");
    printf("Name: ");
    fgets(st3.name, 100,stdin);
    st3.name[strcspn(st3.name, "\n")] = 0;
    printf("Age: ");
    scanf("%d", &st3.age);
    getchar(); // consume newline character
    printf("Total Marks: ");
    scanf("%d", &st3.total_marks);
    getchar(); // consume newline character

    st st4;
    printf("Enter the details of fourth student: \n");
    printf("Name: ");
    fgets(st4.name, 100,stdin);
    st4.name[strcspn(st4.name, "\n")] = 0;
    printf("Age: ");
    scanf("%d", &st4.age);
    getchar(); // consume newline character
    printf("Total Marks: ");
    scanf("%d", &st4.total_marks);
    getchar(); // consume newline character

    st st5;
    printf("Enter the details of fifth student: \n");
    printf("Name: ");
    fgets(st5.name, 100,stdin);
    st5.name[strcspn(st5.name, "\n")] = 0;
    printf("Age: ");
    scanf("%d", &st5.age);
    getchar(); // consume newline character
    printf("Total Marks: ");
    scanf("%d", &st5.total_marks);
    getchar(); // consume newline character

    printf("Details of First Student: \n");
    printf("Name: %s\n", st1.name);
    printf("Age: %d\n", st1.age);
    printf("Total_Marks: %d\n", st1.total_marks);

    printf("Details of Second Student: \n");
    printf("Name: %s\n", st2.name);
    printf("Age: %d\n", st2.age);
    printf("Total_Marks: %d\n", st2.total_marks);

    printf("Details of Third Student: \n");
    printf("Name: %s\n", st3.name);
    printf("Age: %d\n", st3.age);
    printf("Total_Marks: %d\n", st3.total_marks);

    printf("Details of Fourth Student: \n");
    printf("Name: %s\n", st4.name);
    printf("Age: %d\n", st4.age);
    printf("Total_Marks: %d\n", st4.total_marks);

    printf("Details of Fifth Student: \n");
    printf("Name: %s\n", st5.name);
    printf("Age: %d\n", st5.age);
    printf("Total_Marks: %d\n", st5.total_marks);

    float avg = (st1.total_marks + st2.total_marks + st3.total_marks + st4.total_marks + st5.total_marks) / 5.0;
    printf("The average of total marks of all students is: %.2f\n",avg);

    return 0;
}