#include <stdio.h>
#include <windows.h>

long fibonacci(int n);

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int qtd, i;
    printf("Digite a quantidade de termos: ");
    scanf("%d", &qtd);

    for (i = 0; i < qtd; i++) {
        printf("%ld ", fibonacci(i));
    }
    printf("\n");
    return 0;
}

long fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

/*
 A versão recursiva fica lenta porque cada chamada gera outras duas, e os
 mesmos termos são calculados várias vezes. Por exemplo, fibonacci(5) chama
 fibonacci(4) e fibonacci(3), mas fibonacci(4) também chama fibonacci(3) de
 novo. A quantidade de chamadas quase dobra a cada termo, então para n
 grande (40, 50...) o programa demora muito.
*/
