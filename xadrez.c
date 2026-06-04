#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void moverbispo(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Cima Direita\n");
    moverbispo(casas - 1);
}

void movertorre(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Direita\n");
    movertorre(casas - 1);
}

void moverrainha(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverrainha(casas - 1);
}
int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int moverbispo_max = 7;   // Bispo pode se mover até 7 casas em diagonal
    const int rainhaMaxCasas = 7;  // Rainha pode se mover até 7 casas em qualquer direção
    const int movertorre_max = 7;   // Torre pode se mover até 7 casas em linha reta
    const int movercasas = 2;       // Cavalo se move em L: 2 casas em uma direção, 1 em outra
    const int movercavalo = 8;      // Máximo de movimentos possíveis do cavalo em um tabuleiro

    int bispo = moverbispo_max;
    int rainha = rainhaMaxCasas;
    int torre = movertorre_max;
    int casas = movercasas;
    int cavalo = movercavalo;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
    printf("Movimentos do Bispo\n\n");
    moverbispo(bispo);  

    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    
    printf("Movimentos da Torre\n\n");
    movertorre(torre);
    printf("Movimentos da Rainha para a Esquerda\n\n");
    moverrainha(rainha);
    
    printf("\n");
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    
    printf("Movimentos da Rainha para a Esquerda\n\n");
    moverrainha(rainha);
    
    printf("\n");
   printf("Movimentos do Cavalo\n\n");
    while (casas--)
    {
        for (int k = 0; k < 2; k++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }
    
    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    printf("Movimentos do Cavalo com Loops Avançados\n\n");
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
        {
            if (i == 0 && j == 0)
            {   
                continue; // Pula a posição inicial do Cavalo
            }  
            if ((i == 2 && j == 1) || (i == 1 && j == 2) || (i == 2 && j == 3) || (i == 3 && j == 2) ||
                (i == 4 && j == 1) || (i == 1 && j == 4) || (i == 4 && j == 3) || (i == 3 && j == 4))
            {
                printf("Cavalo pode se mover para (%d, %d)\n", i, j);
            }
            else
            {
                continue; // Continua para a próxima posição se não for válida para o Cavalo
            } 
           
        }
    return 0;   
}
              
                
        
    

