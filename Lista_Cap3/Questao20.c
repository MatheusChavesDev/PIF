#include <stdio.h>

int main() {
    int i;

    printf("=========================================\n");
    printf("   Decimal   |   Hexadecimal   | Caractere \n");
    printf("=========================================\n");

    for (i = 32; i <= 126; i++) {
        printf("     %3d     |       %02X        |     %c    \n", i, i, i);
    }

    printf("=========================================\n");

    return 0;
}