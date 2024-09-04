#include <stdio.h>
/*1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre 
será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), 
escreva um programa na linguagem que desejar onde, informado um número, ele calcule a 
sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.*/

// Função para verificar se um número pertence à sequência de Fibonacci
int pertenceFibonacci(int num) {
    int a = 0, b = 1, temp;

    // Verifica se o número é 0 ou 1, que são os primeiros da sequência
    if (num == 0 || num == 1) {
        return 1;
    }

    // Gera a sequência de Fibonacci até que o valor seja maior ou igual ao número informado
    while (b < num) {
        temp = a + b;
        a = b;
        b = temp;
    }

    // Verifica se o número está na sequência
    return (b == num);
}

int main() {
    int numero;

    // Solicita ao usuário que informe um número
    printf("Digite um número para verificar se pertence à sequência de Fibonacci: ");
    scanf("%d", &numero);

    // Verifica se o número pertence à sequência e exibe a mensagem apropriada
    if (pertenceFibonacci(numero)) {
        printf("%d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", numero);
    }

    return 0;
}