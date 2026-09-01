#include <stdio.h>

int main() {
    int a = 5;

    printf("Initial value of a = %d\n", a);

    printf("++a = %d\n", ++a);
    printf("After ++a, a = %d\n\n", a);

    a = 5;
    printf("a++ = %d\n", a++);
    printf("After a++, a = %d\n\n", a);

    a = 5;
    printf("--a = %d\n", --a);
    printf("After --a, a = %d\n\n", a);

    a = 5;
    printf("a-- = %d\n", a--);
    printf("After a--, a = %d\n", a);

    return 0;
}