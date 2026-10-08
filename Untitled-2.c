#include <stdio.h>

int main () {
    // declaração das variaveis
    int y = 10;
    int e = 20;
    // faz aparecer no ecrã, scanf e para as funções do y e x printf aparece no ecra
    printf("Olá bem vindo á calculadora gamer, digite seu primerio numero:\n");
    scanf("%d", &y);
    printf("Digite seu segundo numero:\n");
    scanf("%d", &e);
    // faz a soma
    int soma = y + e;
    printf("A soma dos dois numeros é: %d\n", soma);
    return 0;
}