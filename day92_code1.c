// Q142: Store details of 5 students in an array of structures and print all.

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[5];

    // Input details for 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Print details of all students
    printf("\nDetails of all students:\n");
    printf("Name\t\tRoll\tMarks\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\t\t%d\t%.2f\n", students[i].name, students[i].roll, students[i].marks);
    }

    return 0;
}

