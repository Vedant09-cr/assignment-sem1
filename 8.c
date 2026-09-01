#include <stdio.h>

int main() {
    int age, income, creditScore;

    printf("Enter age, income and credit score: ");
    scanf("%d %d %d", &age, &income, &creditScore);

    if (age >= 21 && age <= 60 && income > 35000 && creditScore >= 750) {
        printf("Eligible for loan\n");
    } else {
        printf("Not eligible for loan\n");
    }

    return 0;
}