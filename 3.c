#include <stdio.h>

int g = 10;

int main() {
    int a = 1;

    printf("Inside main before block\n");
    printf("a = %d\n", a);
    printf("g = %d\n\n", g);

    {
        int b = 2;
        static int s = 0;

        s++;
        a++;
        g++;

        printf("Inside block\n");
        printf("b = %d\n", b);
        printf("s = %d\n", s);
        printf("a = %d\n", a);
        printf("g = %d\n\n", g);
    }

    printf("Inside main after block\n");
    printf("a = %d\n", a);
    printf("g = %d\n", g);

    return 0;
}