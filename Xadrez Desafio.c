#include <stdio.h>

int main() {
    int i;
    
    printf("### Movimentos da Torre ###\n");

    // Mover a Torre 5 casas para a frente
    // Usando a Estrutura de repetição "FOR"
    for (int i = 0; i < 5; i++){
        printf("Frente\n");
    }
  
    // Mover a Rainha 8 casas para esquerda
    // Usando a Estrutura de repetição "Do while"

    printf("### Movimentos da Rainha ###\n");
    int movimentosRainha = 0;
    do {
        printf("esquerda\n");
        movimentosRainha++;
    } while (movimentosRainha < 8);

    // Mover o Bispo 5 casas para diagonal direita
    // Usando a Estrutura de repetição while

    int movimentosBispo = 0;
    printf("### Movimentos do Bispo ###\n");
    while (movimentosBispo < 5) {
        printf("frente e direita\n");
        movimentosBispo++;
    }

   
    
    return 0;
}