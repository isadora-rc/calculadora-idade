#include <stdio.h>

int main() {

    int anoNasc, anoAtual=2026, idade;

    printf("Calculadora de Idade\n");

    printf("Digite o ano em que você nasceu: ");
    scanf("%d", &anoNasc);

    idade = anoAtual - anoNasc;

    printf("Idade: %d ano.\n", idade);

    if (idade < 12) {
        printf("Faixa etária: Criança\n");
    } else if (idade < 18) {
        printf("Faixa etária: Adolescente\n");
    } else if (idade < 60) {
        printf("Faixa etária: Adulto\n");
    } else {
        printf("Faixa etária: Idoso\n");
    }

    return 0;
}