#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    unsigned char ch;

    for (ch = getch(); ch != 'q'; ch = getch()) {
        printf("%3c\n", ch + 1);
    }

    system("PAUSE");
    return 0;
}