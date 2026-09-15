// Lab 3 Task 8: Personal Profile Using String I/O

// (a) Write the pseudocode

// DECLARE full_name: STRING
// DECLARE City: STRING
// DECLARE University: STRING
// DECLARE Department: STRING
//
// INPUT("Enter your full name: ", full_name)
// INPUT("Enter your city: ", City)
// INPUT("Enter your university name: ", University)
// INPUT("Enter your department: ", Department)
//
// OUTPUT("===========================================")
// OUTPUT("           STUDENT PROFILE")
// OUTPUT("===========================================")
//
// OUTPUT("Full Name   : ", full_name)
// OUTPUT("City        : ", City)
// OUTPUT("University  : ", University)
// OUTPUT("Department  : ", Department)
//
// OUTPUT("===========================================")


// (b) Write the C program

# include <stdio.h>
#include <string.h>
int main() {
    char full_name[50];
    char City[30];
    char University[50];
    char Department [40];

    printf("Enter your full name: ");
    scanf("%[^\n]", full_name);

    printf("Enter your city: ");
    scanf(" %[^\n]", City);

    printf("Enter your university name: ");
    scanf(" %[^\n]", University);

    printf("Enter your department: ");
    scanf(" %[^\n]", Department);

    // Formatted Output Display
    printf("\n===========================================\n");
    printf("           STUDENT PROFILE\n");    
    printf("===========================================\n");
    printf("Full Name   : %s\n", full_name);        
    printf("City        : %s\n", City);
    printf("University  : %s\n", University);
    printf("Department  : %s\n", Department);
    printf("===========================================\n");

    return 0;
}

// Output Screenshot Link: https://github.com/user-attachments/assets/829987ca-2e40-4257-838e-d1cf21d5f857
