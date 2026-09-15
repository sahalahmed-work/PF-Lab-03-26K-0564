// Lab 3 Task 10: Output Formatting Challenge

//(a) Write the pseudocode 

// DECLARE Name: STRING 
// DECLARE RollNo: INTEGER
// DECLARE Section: CHARACTER
// DECLARE Value: FLOAT
// DECLARE SampleChar: CHARACTER
// DECLARE question: STRING

// Input("Enter the student's name: ", Name)
// Input("Enter Roll Number: ", RollNo)
// Input("Enter your Section: ", Section)
// Input("Enter a float value: ", Value)
// Input("Enter a sample character: ", SampleChar)
// Input("Enter Sample Question: ", question)
//
// OUTPUT("===========================================")
// OUTPUT("           PROGRAMMING FUNDAMENTALS")
// OUTPUT("Name: ", Name)
// OUTPUT("Roll Number: ", RollNo)
// OUTPUT("Section: ", Section)
//
// OUTPUT("C topics:")
// OUTPUT("        1. Variables")
// OUTPUT("        2. Data Types")
// OUTPUT("        3. Input/Output")
// OUTPUT("        4. Format Specifiers")
// OUTPUT("        5. Escape Sequences")
//
// OUTPUT("Sample Character: ", SampleChar)
// OUTPUT("Sample Question: ", question)
//
// OUTPUT("Float Value:")
// OUTPUT("Default: ", Value)
// OUTPUT("2-digit: ", Value with 2 decimal places)
// OUTPUT("4-digit: ", Value with 4 decimal places)
//
// OUTPUT("===========================================")


// (b) Write the C program
#include <stdio.h>
int main() {
   char name[30];
   int RollNo;
   char Section;
   float Value;
   char SampleChar;
   char question[100];

   printf("Enter the student's name: ");
   scanf("%[^\n]", name);

   printf("Enter Roll Number: ");
   scanf("%d", &RollNo);

   printf("Enter your Section: ");
   scanf(" %c", &Section);

    printf("Enter a float value: ");
    scanf("%f", &Value);
    
    printf("Enter a sample character: ");
    getchar(); // Clear the newline
    SampleChar = getchar();

    getchar();

    printf("Enter Sample Question: ");
    fgets(question, sizeof(question), stdin);




    // Formatted Output Display

    printf("\n===========================================\n");
    printf("           PROGRAMMING FUNDAMENTALS\n");  
    printf("===========================================\n");

    printf("Name\t\t: %s\n", name);
    printf("Roll Number\t: %d\n", RollNo);
    printf("Section\t\t: %c\n", Section);
    printf("\n");

    printf("C topics: \n");
    printf("\t1.   Variables \n");
    printf("\t2.   Data Types \n");    
    printf("\t3.   Input/Output \n");
    printf("\t4.   Format Specifiers \n");
    printf("\t5.   Escape Sequences \n");
    printf("\n");

    printf("Sample Character:  '");
    putchar(SampleChar);
    printf("'\n");

    printf("\n Sample Question:  ");
    puts(question);

    printf("Float Value:\n");
    printf("Default      : %f\n", Value);
    printf("2-digit      : %.2f\n", Value);
    printf("4-digit      : %.4f\n", Value);
    printf("\n");

    printf("===========================================\n");

    return 0;

}

// Output Screenshot Link: https://github.com/user-attachments/assets/1966d4e0-0758-4e08-b8ab-7b3c64fd909d
