#include <stdio.h>

int main() {
    int numeros[10];
    int i, maior;

    // Entrada dos valores
    printf("Digite 10 valores:\n");
    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Considera o primeiro como maior inicialmente
    maior = numeros[0];

    // Procura o maior
    for (i = 1; i < 10; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    // Resultado
    printf("\nO maior valor digitado foi: %d\n", maior);

    return 0;
}
