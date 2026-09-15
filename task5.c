//Lab 3 Task 5: Data Type and Format Specifier Demonstration

// (a) Write the pseudocode 

// DECLARE num_int: INTEGER
// DECLARE num_uint: INTEGER
// DECLARE num_float: FLOAT
// DECLARE num_double: FLOAT
// DECLARE ch: CHARACTER
// DECLARE num_long: INTEGER
//
// INPUT("Enter an Integer (Int): ", num_int)
// INPUT("Enter an Unsigned integer (unsigned int): ", num_uint)
// INPUT("Enter a Float value: ", num_float)
// INPUT("Enter a Double value: ", num_double)
// INPUT("Enter a Character(char): ", ch)
// INPUT("Enter a Long integer (long int): ", num_long)
// 
// OUTPUT("===========================================")
// OUTPUT("           Data Type Demonstration")
// OUTPUT("===========================================")

// OUTPUT("--- Integer Representations (num_int) ---")
// OUTPUT("Decimal                 : ", num_int)
// OUTPUT("Octal                   : ", num_int in octal format)
// OUTPUT("Hexadecimal (lowercase) : ", num_int in lowercase hexadecimal format)
// OUTPUT("Hexadecimal (uppercase) : ", num_int in uppercase hexadecimal format)
// 
// OUTPUT("--- Floating-Point Representations (num_float) ---")
// OUTPUT("Standard (%f)        : ", num_float)
// OUTPUT("Exponential (%e)     : ", num_float in exponential format)
// OUTPUT("Shortest (%g)        : ", num_float in shortest representation)
// 
// OUTPUT("--- Other Data Types ---")
// OUTPUT("Unsigned Int           : ", num_uint)
// OUTPUT("Double                 : ", num_double)
// OUTPUT("Character              : ", ch)
// OUTPUT("Long Integer           : ", num_long)
// 
// OUTPUT("===========================================")
 

// (b) Write the C program

#include <stdio.h>

 int main() { 
    int num_int;
    unsigned int num_uint;
    float num_float;
    double num_double;
    char ch;
    long int num_long;

    printf("Enter an Integer (Int): ");
    scanf("%d", &num_int);

    printf("Enter an Unsigned integer (unsigned int): ");
    scanf("%u", &num_uint);

    printf("Enter a Float value: ");
    scanf("%f", &num_float);

    printf("Enter a Double value: ");
    scanf("%lf", &num_double);

    printf("Enter a Character(char): ");
    scanf(" %c", &ch);

    printf("Enter a Long integer (long int): ");
    scanf("%ld", &num_long);

    printf("\n===========================================\n");
    printf("           Data Type Demonstration\n");
    printf("===========================================\n");

    // Integer Formats
    printf("--- Integer Representations (%d) ---\n", num_int);
    printf("Decimal                 : %d\n", num_int);
    printf("Octal                   : %o\n", num_int);
    printf("Hexadecimal (lowercase) : %x\n", num_int);
    printf("Hexadecimal (uppercase) : %X\n", num_int);

    //Floating-Point Formats
    printf("\n--- Floating-Point Representations (%f) ---\n", num_float);
    printf("Standard (%%f)        : %f\n", num_float);
    printf("Exponential (%%e)     : %e\n", num_float);
    printf("Shortest (%%g)        : %g\n", num_float);

    // Other Variables
    printf("\n--- Other Data Types ---\n");

    printf("Unsigned Int           : %u\n", num_uint);  
    printf("Double                 : %.2lf\n", num_double);
    printf("Character              : %c\n", ch);
    printf("Long Integer           : %ld\n", num_long);

    printf("===========================================\n");

    return 0;
}

// Output Screenshot Link: https://github.com/user-attachments/assets/3e855c61-c096-48b4-add2-46326ec98854
