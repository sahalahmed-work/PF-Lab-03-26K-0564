//Lab 3 Task 9: Formatted Student Report

// (a) Write the pseudocode

// DECLARE Std_name: STRING
// DECLARE RollNo: INTEGER
// DECLARE Section: CHARACTER
// DECLARE Age: INTEGER
// DECLARE CGPA: FLOAT
// DECLARE Height: FLOAT
//
// INPUT("Enter the student's name: ", Std_name)
// INPUT("Enter Roll Number: ", RollNo)
// INPUT("Enter your Section: ", Section)
// INPUT("Enter your age: ", Age)
// INPUT("Enter your CGPA: ", CGPA)
// INPUT("Enter your Height: ", Height)
//
// OUTPUT("------------------------------------------------")
// OUTPUT("  \t STUDENT REPORT")
// OUTPUT("------------------------------------------------")
//
// OUTPUT("Name         : ", Std_name)
// OUTPUT("Roll Number  : ", RollNo)
// OUTPUT("Section      : ", Section)
// OUTPUT("Age          : ", Age)
// OUTPUT("CGPA         : ", CGPA)
// OUTPUT("Height       : ", Height)

//OUTPUT("------------------------------------------------")


// (b) Write the C program

#include <stdio.h>
int main() {

    char Std_name[30];
    int RollNo;
    char Section;
    int Age;
    float CGPA;
    float Height;

    printf("Enter the student's name: ");
    scanf("%[^\n]", Std_name);

    printf("Enter Roll Number: ");
    scanf("5d", &RollNo);

    printf("Enter your Section: ");
    scanf(" %c", &Section);

    printf("Enter your age: ");
    scanf("%d", &Age);

    printf("Enter your CGPA: ");
    scanf("%f", &CGPA);

    printf("Enter your Height: ");
    scanf("%f", &Height);

    //Formatted Table Output Using \t and \n

    printf("\n------------------------------------------------\n");
    printf("  \t STUDENT REPORT\n");

    printf("------------------------------------------------\n");
    printf("Name\t\t: %s\n", Std_name);
    printf("Roll Number\t: %d\n", RollNo);
    printf("Section\t\t: %c\n", Section);
    printf("Age\t\t: %d\n", Age);
    printf("CGPA\t\t: %.2f\n", CGPA);   
    printf("Height\t\t: %.2f\n", Height);
    printf("------------------------------------------------\n");

    return 0;
}

// Output Screenshot Link: https://github.com/user-attachments/assets/11f355be-cc06-4707-a30c-f687b62fa5f3
