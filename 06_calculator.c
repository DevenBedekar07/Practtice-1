#include <stdio.h>

int main() {
    float num1, num2, result;
    char operation;

    // Input numbers and operation
    printf("Enter the first number: ");
    if (scanf("%f", &num1) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    printf("Enter the second number: ");
    if (scanf("%f", &num2) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &operation);

    // Perform the operation using switch
    switch (operation) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operation.\n");
    }

    return 0;
}
