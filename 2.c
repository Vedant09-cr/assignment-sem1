#include <stdio.h>

int main() {
    int a;
    float b;

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter a floating-point number: ");
    scanf("%f", &b);

    /* Implicit type conversion */
    printf("\nUsing Implicit Type Conversion:\n");
    printf("Sum        = %.2f\n", a + b);
    printf("Difference = %.2f\n", a - b);
    printf("Product    = %.2f\n", a * b);
    printf("Quotient   = %.2f\n", a / b);

    /* Explicit type conversion */
    printf("\nUsing Explicit Type Conversion:\n");
    printf("Sum        = %.2f\n", (float)a + b);
    printf("Difference = %.2f\n", (float)a - b);
    printf("Product    = %.2f\n", (float)a * b);
    printf("Quotient   = %.2f\n", (float)a / b);

    return 0;
}