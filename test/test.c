#include <stdio.h>
#include <limits.h>
#include <string.h>

struct student
{
    char name[40];
    int roll;
    int marks[3];
};


int main() {
    struct student arr[2];

    for (int i=0; i<2; i++) {
        char n[40];
        printf("Enter the name of %d student", i+1);
        scanf("%s", &arr[i].name);

        printf("Enter the roll of %d student", i+1);
        scanf("%d", &arr[i].roll);

        printf ("Enter the marks of three subjects: ");
        for (int j=0; j<3; j++) {
            scanf("%d", &arr[i].marks[j]);

        }

    }
    
    int max = INT_MIN; 
    char name[40];
    int roll; 
    for (int i=0; i<2; i++) {
        int s = 0;
        for (int j=0; j<3; j++) {
            s += arr[i].marks[j];
        }
        if (max < s) {
            max = s;
            roll = arr[i].roll;
            strcpy(name, arr[i].name);
        }
    }
    printf("%s with roll no as: %d has got the highest aggregate marks.\n", name, roll);
    return 0;
}