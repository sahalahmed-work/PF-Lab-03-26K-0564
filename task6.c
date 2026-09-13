//Lab 3 Task 6: Precision Comparison

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
