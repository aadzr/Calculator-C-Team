#include <stdio.h>














int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

int main() {
    int a, b, choice;

    printf("=== Calculator C Team ===\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nChoose operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Result: %d\n", add(a, b));
            break;
        case 2:
            printf("Result: %d\n", sub(a, b));
            break;
        case 3:
            printf("Result: %d\n", mul(a, b));
            break;
        case 4:
            printf("Result: %d\n", divide(a, b));
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}