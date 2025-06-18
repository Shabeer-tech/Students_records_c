#include <stdio.h>

// Student structure define kar rahe hain
struct student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct student s[2]; // 2 students ke liye array of structures
    int i;

    printf("==== Enter Student Details ====\n\n");

    // Loop to take input for each student
    for (i = 0; i < 2; i++) {
        printf("Student %d\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);

        printf("-----------------------------\n");
    }

    // Displaying student records
    printf("\n==== Student Records ====\n\n");
    for (i = 0; i < 2; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number : %d\n", s[i].roll);
        printf("Name        : %s\n", s[i].name);
        printf("Marks       : %.2f\n", s[i].marks);
        printf("-----------------------------\n");
    }

    return 0;
}