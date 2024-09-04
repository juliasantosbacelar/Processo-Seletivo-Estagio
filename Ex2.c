#include <stdio.h>
#include <ctype.h>  // Para a função tolower()
/*2) Escreva um programa que verifique, em uma string, a existência da letra ‘a’, 
seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.*/
int main() {
    char str[100];  // String para armazenar a entrada do usuário
    int count = 0;  // Contador para o número de ocorrências da letra 'a'
    int i;

    // Solicita ao usuário que insira uma string
    printf("Digite uma string (máximo 99 caracteres): ");
    fgets(str, sizeof(str), stdin);

    // Conta o número de vezes que 'a' ou 'A' aparece na string
    for (i = 0; str[i] != '\0'; i++) {
        if (tolower(str[i]) == 'a') {
            count++;
        }
    }

    // Verifica se a letra 'a' foi encontrada e exibe a mensagem apropriada
    if (count > 0) {
        printf("A letra 'a' aparece %d vez(es) na string.\n", count);
    } else {
        printf("A letra 'a' não aparece na string.\n");
    }

    return 0;
}