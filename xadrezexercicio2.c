#include <stdio.h>

int main() {

int i = 1, j; // declaração de variaveis
// i = 1 para que o laço while seja executado pelo menos uma vez
// j = variável de controle do laço for


//laço de repetição while
while(i == 1) {
    // laço for para imprimir 2 casas nas direções
    for (j = 1; j <= 2; j++) {


        printf("Baixo\n");
    }
    printf("Esquerda\n");
    i--;
}
