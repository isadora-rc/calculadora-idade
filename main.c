#include <stdio.h>

int main() {

    int anoNasc, anoAtual=2026, idade;

    printf("Calculadora de Idade\n");

    printf("Digite o ano em que você nasceu: ");
    scanf("%d", &anoNasc);

    idade = anoAtual - anoNasc;

    printf("Idade: %d ano.\n", idade);

    return 0;
}