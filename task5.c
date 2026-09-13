//Lab 3 Task 5: Data Type and Format Specifier Demonstration

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
