// Lab 3 Task 4: Student Information Program

// (a) Write the pseudocode

// DECLARE name: STRING
// DECLARE RollNo: INTEGER
// DECLARE Age: INTEGER
// DECLARE Height: FLOAT
// DECLARE GPA: FLOAT
// DECLARE Section: CHARACTER
//
// INPUT("Enter name: ", name)
// INPUT("Enter Roll Number: ", RollNo)
// INPUT("Enter Age: ", Age)
// INPUT("Enter Height in metres: ", Height)
// INPUT("Enter GPA: ", GPA)
// INPUT("Enter Section: ", Section)
//
// OUTPUT("===========================================")
// OUTPUT("           Student Information")
// OUTPUT("===========================================")
// OUTPUT("Name         : ", name)
// OUTPUT("Roll No.     : ", RollNo)
// OUTPUT("Age          : ", Age)
// OUTPUT("Height       : ", Height, " metres")
// OUTPUT("GPA          : ", GPA)
// OUTPUT("Section      : ", Section)
// OUTPUT("===========================================")


// (b) Write the C program

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

// Output Screenshot Link: https://github.com/user-attachments/assets/0e2b9cc6-7aad-412d-a1c4-4f1179f45840

