// Lab 3 Task 7: Character Input and Output 

// (a) Write the pseudocode

// DECLARE ch_1: CHAR
// DECLARE ch_2: CHAR
// DECLARE ch_3: CHAR
//
// INPUT("Enter First Character: ", ch_1)
// INPUT("Enter Second Character: ", ch_2)
// INPUT("Enter Third Character: ", ch_3)
//
// OUTPUT("------------------------------------")

// OUTPUT(" Characters Entered:")
// OUTPUT("First Character: ", ch_1)
// OUTPUT("Second Character: ", ch_2)
// OUTPUT("Third Character: ", ch_3)

// OUTPUT("------------------------------------")


// (b) Write the C program

#include <stdio.h>
int main() {

    char ch_1;
    char ch_2;
    char ch_3;

    printf("Enter First Character: ");
    ch_1 = getchar();
    getchar();  

    printf("Enter Second Character: ");
    ch_2 = getchar();   
    getchar();

    printf("Enter Third Character: ");
    ch_3 = getchar();   

    printf("\n-----------------------------------\n");
    printf(" Characters Entered:\n");

    printf("First Character: ");
    putchar(ch_1);
    putchar('\n');

    printf("Second Character: ");
    putchar(ch_2);
    putchar('\n');

    printf("Third Character: ");
    putchar(ch_3);
    putchar('\n');

    printf("-----------------------------------\n");

    return 0;
}

// Output Screenshot Link: https://github.com/user-attachments/assets/10c03111-3134-4f74-916c-15789e087bec
