#include <stdio.h>
#include <stdlib.h>

int main() {

    for (int i = 0; i < 6; i++) {
        printf("%d\n", rand() % 60 + 1);
        
    }

system("PAUSE");
return 0;
}