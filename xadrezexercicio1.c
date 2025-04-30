#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

int i, b=1, r=1;

//movimentação da torre com uso de for
printf("A torre se moveu para...\n");
for(i = 1; i <=5; i++){

    printf("Direita\n");
    
}
printf("\n");
// movimentação do bispo com do while
printf("O bispo se moveu para...\n");

do{

    printf("Direita, Cima\n");
    b++;

}while(b <=5 );

printf("\n");

//movimentação da rainha com while
printf("A rainha se moveu para...\n");

while( r <= 8){

    printf("Esquerda\n");
    r++;
}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
