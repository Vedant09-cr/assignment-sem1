#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0) {
        for (i = 1; i <= n; i++) {
            sum = sum + i;
        }
        printf("Sum = %d\n", sum);
    } else {
        printf("Enter positive number\n");
    }

    return 0;
}