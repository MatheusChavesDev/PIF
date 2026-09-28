#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    unsigned char ch;

    for (;;) {
        printf("%3c\n", rand() % 2);
    }

    system("PAUSE");
    return 0;
}