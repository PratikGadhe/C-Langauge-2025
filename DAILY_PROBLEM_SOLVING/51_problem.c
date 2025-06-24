//3. Write a C program to implement control flow statements i.e. switch case.

#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    // Display menu
    printf("Select an operation to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Take two numbers as input
    printf("Enter number 1 : ");
    scanf("%f",&num1);
    printf("Enter number 2 : ");
    scanf("%f",&num2);

    // Switch case for operations
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %f + %f = %f\n", num1, num2, result);
            break;

        case 2:
            result = num1 - num2;
            printf("Result: %f - %f = %f\n", num1, num2, result);
            break;

        case 3:
            result = num1 * num2;
            printf("Result: %f * %f = %f\n", num1, num2, result);
            break;

        case 4:
            result = num1 / num2;
            printf("Result: %f / %f = %f\n", num1, num2, result);
            break;

        default:
            printf("Invalid choice! Please enter 1 to 4.\n");
    }

    return 0;
}
