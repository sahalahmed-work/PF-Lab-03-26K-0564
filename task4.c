// Lab 3 Task 4: Student Information Program

#include <stdio.h>


int main() {
    // Variable Declarations
    char name[50];
    int RollNo;
    int Age;
    float Height;
    float GPA;
    char Section;

    // Taking user input for student information
    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &RollNo);

    printf("Enter Age: ");
    scanf("%d", &Age);

    printf("Enter Height in metres: ");
    scanf("%f", &Height);

    printf("Enter GPA: ");
    scanf("%f", &GPA);

    printf("Enter Section: ");
    scanf(" %c", &Section);

    // Formatted Output Display 
    printf("===========================================\n");
    printf("           Student Information\n");
    printf("===========================================\n");
    printf("Name         : %s\n", name);
    printf("Roll No.     : %d\n", RollNo);
    printf("Age          : %d\n", Age);
    printf("Height       : %.2f metres\n", Height);
    printf("GPA          : %.2f\n", GPA);
    printf("Section      : %c\n", Section);
    printf("===========================================\n");
    return 0;
}
