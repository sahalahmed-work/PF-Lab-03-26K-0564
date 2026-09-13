/LAB 3 Task 9: Formatted Student Report

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
