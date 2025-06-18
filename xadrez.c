#include <stdio.h>
#include <string.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    char piece[10];
    char direction1[10], direction2[10];
    int position;

    int option;

    do
    {
        printf("\n=== Bem-vindo à demonstração de movimentação de peças do jogo de xadrez. ===\nEscolha qual peça deseja ver a demonstração.\n");
        printf("1 -> Bisbo\n");
        printf("2 -> Rainha\n");
        printf("3 -> Torre\n");
        printf("0 -> Sair do programa\n");
        printf("Opcao: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:

            strcpy(piece, "Bispo");       
            strcpy(direction1, "Cima");
            strcpy(direction2, "Direita");
            position = 5;

            printf("\nVocê escolheu a peça %s!\nMovendo..\n\n", piece);

            for (int i = 0; i < position; i++)
            {
                printf("%s \n%s \n", direction1, direction2);
            }

            break;
        case 2:
            strcpy(piece, "Rainha");       
            strcpy(direction1, "Esquerda");
            position = 8;

            printf("\nVocê escolheu a peça %s!\nMovendo..\n\n", piece);

            while (position > 0)
            {
                printf("%s\n", direction1);
                position--;
            }
            
            break;
        case 3:
            strcpy(piece, "Torre");       
            strcpy(direction1, "Cima");
            position = 5;

            printf("\nVocê escolheu a peça %s!\nMovendo..\n\n", piece);

            do
            {
                printf("%s\n", direction1);
                position--;
            } while (position > 0);
            

            break;
        case 0:
            printf("Saindo do programa, até logo!\n2");
            return 0;
            break;
        default:
            printf("Opcao Invalida!\n");
            break;
        }
    } while (option != 0);
    
    
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

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
