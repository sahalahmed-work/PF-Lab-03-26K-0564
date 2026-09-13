// Lab 3 Task 7: Character Input and Output 

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
