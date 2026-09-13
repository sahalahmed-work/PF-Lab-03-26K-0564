// Lab 3 Task 8: Personal Profile Using String I/O

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
