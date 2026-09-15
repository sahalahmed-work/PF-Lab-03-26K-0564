//Lab 3 Task 6: Precision Comparison

// (a) Write the pseudocode

// DECLARE float_num: FLOAT
// DECLARE double_num: FLOAT
// 
// INPUT("Enter a float value: ", float_num)
// INPUT("Enter a double value: ", double_num)
// 
// OUTPUT("===========================================")
// OUTPUT("           Precision Comparison")
// OUTPUT("===========================================")
// 
// OUTPUT("Float Value:")
// OUTPUT("Default      : ", float_num)
// OUTPUT("2 decimal places : ", float_num with 2 decimal places)
// OUTPUT("4 decimal places : ", float_num with 4 decimal places)
// OUTPUT("6 decimal places : ", float_num with 6 decimal places)
// 
// OUTPUT("Double Value:")
// OUTPUT("Default      : ", double_num)
// OUTPUT("2 decimal places : ", double_num with 2 decimal places)
// OUTPUT("4 decimal places : ", double_num with 4 decimal places)
// OUTPUT("6 decimal places : ", double_num with 6 decimal places)
// 
// OUTPUT("===========================================")


// (b) Write the C program

#include <stdio.h>
int main() {
    float float_num;
    double double_num;

    printf("Enter a float value: ");
    scanf("%f", &float_num);

    printf("Enter a double value: ");
    scanf("%lf", &double_num);

    printf("\n===========================================\n");
    printf("           Precision Comparison\n");    
    printf("===========================================\n");

    printf("Float Value:\n");
    printf("Default      :");
    printf("2 decimal places : %.2f\n", float_num);
    printf("4 decimal places : %.4f\n", float_num);
    printf("6 decimal places : %.6f\n\n", float_num);

    printf("Double Value:\n");
    printf("Default      :");
    printf("2 decimal places : %.2lf\n", double_num);
    printf("4 decimal places : %.4lf\n", double_num);   
    printf("6 decimal places : %.6lf\n", double_num);
    printf("===========================================\n");

    return 0;
}

//Output Screenshot Link: https://github.com/user-attachments/assets/a0354064-0f2a-426e-ab8c-241c26c36206
