#include <stdio.h>

//criação de void loop para receber numero de casas que o cavalo vai avançar
void cavalo(char casas){
    if(casas > 0){
        printf("Cima\n");
        printf("Cima\n");
        printf("Esquerda\n");
        cavalo(casas - 1);
    }


};
//criação de void loop para receber numero de casas que o bispo vai avançar
void bispo(char casas){
    if(casas > 0){
        printf("Cima\n");
        printf("Esquerda\n");
        bispo(casas - 1);
    }


};
//criação de void loop para receber numero de casas que a rainha vai avançar
void rainha(char casas){
    if( casas > 0){
        printf("Cima\n");
        printf("Direita\n");
        rainha(casas - 1);
    }


};

//criação de void loop para receber numero de casas que a torre vai avançar
void torre(char casas){
    if(casas > 0){
        printf("Direita\n");
        torre(casas - 1);
    }


};


int main() {


cavalo(3);
//bispo(3);
//rainha(3);
//torre(3);






    return 0;
}
