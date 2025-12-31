#include <stdio.h>

// Function declarations
void add(float a, float b);
void subtract(float a, float b);
void multiply(float a, float b);
void divide(float a, float b);

int main() {
    int choice;
    float num1, num2;

    // Menu
    printf("====== MINI CALCULATOR ======\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("=============================\n");

    // User choice
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Call function based on choice
    switch (choice) {
        case 1:
            add(num1, num2);
            break;
        case 2:
            subtract(num1, num2);
            break;
        case 3:
            multiply(num1, num2);
            break;
        case 4:
            divide(num1, num2);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

// Function definitions
void add(float a, float b) {
    printf("Result: %.2f\n", a + b);
}

void subtract(float a, float b) {
    printf("Result: %.2f\n", a - b);
}

void multiply(float a, float b) {
    printf("Result: %.2f\n", a * b);
}

void divide(float a, float b) {
    if (b != 0) {
        printf("Result: %.2f\n", a / b);
    } else {
        printf("Error! Division by zero is not allowed.\n");
    }
}
