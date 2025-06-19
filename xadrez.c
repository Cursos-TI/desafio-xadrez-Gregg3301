#include <stdio.h>
#include <string.h>

// Programa de demonstração de movimentação das peças do jogo de xadrez
// Desenvolvido para praticar o uso de estruturas de repetição e controle

int main() {
    // Declaração de variáveis
    char piece[10];         // Armazena o nome da peça escolhida
    char direction1[10];    // Primeira direção de movimentação
    char direction2[10];    // Segunda direção (quando necessário)
    int position;           // Número de movimentos (quantidade de repetições)

    int option;             // Armazena a opção escolhida pelo usuário

    // Loop principal do programa
    do {
        // Exibição do menu de seleção
        printf("\n=== Bem-vindo à demonstração de movimentação de peças do jogo de xadrez. ===\n");
        printf("Escolha qual peça deseja ver a demonstração.\n");
        printf("1 -> Bispo\n");
        printf("2 -> Rainha\n");
        printf("3 -> Torre\n");
        printf("4 -> Cavalo\n");
        printf("0 -> Sair do programa\n");
        printf("Opcao: ");
        scanf("%d", &option);

        // Processamento da opção escolhida
        switch (option) {
            case 1: // Movimento do Bispo (movimenta em diagonais)
                strcpy(piece, "Bispo");       
                strcpy(direction1, "Cima");     // Primeira direção: Cima
                strcpy(direction2, "Direita");  // Segunda direção: Direita
                position = 5;                   // Quantidade de movimentos

                printf("\nVocê escolheu a peça %s!\nMovendo..\n\n", piece);

                // O bispo se move 5 vezes nas direções especificadas
                for (int i = 0; i < position; i++) {
                    printf("%s \n%s \n", direction1, direction2);
                }
                break;

            case 2: // Movimento da Rainha (exemplo: movimentando para a esquerda)
                strcpy(piece, "Rainha");       
                strcpy(direction1, "Esquerda");  // Direção única para este exemplo
                position = 8;                    // Número de movimentos

                printf("\nVocê escolheu a peça %s!\nMovendo..\n\n", piece);

                // Movimenta enquanto a posição for maior que zero
                while (position > 0) {
                    printf("%s\n", direction1);
                    position--;
                }
                break;

            case 3: // Movimento da Torre (movimenta-se em linha reta - exemplo: para cima)
                strcpy(piece, "Torre");       
                strcpy(direction1, "Cima");      // Direção da torre neste exemplo
                position = 5;                    // Número de movimentos

                printf("\nVocê escolheu a peça %s!\nMovendo..\n\n", piece);

                // Movimenta utilizando a estrutura do-while
                do {
                    printf("%s\n", direction1);
                    position--;
                } while (position > 0);
                break;

            case 4: // Movimento do Cavalo (movimento em L: duas direções)
                strcpy(piece, "Cavalo");       
                strcpy(direction1, "Cima");      // Primeira parte do L
                strcpy(direction2, "Direita");   // Segunda parte do L
                position = 1;                    // Movimento único para cada L

                printf("\nVocê escolheu a peça %s!\nMovendo..\n\n", piece);

                // Movimento em L: duas vezes para "Cima" e uma para "Direita"
                for (int i = 0; i < position; i++) {
                    for (int j = 0; j < position + 1; j++) {
                        printf("%s\n", direction1);
                    }
                    printf("%s\n", direction2);
                }
                break;

            case 0: // Sai do programa
                printf("Saindo do programa, até logo!\n");
                return 0;

            default: // Opção inválida
                printf("Opcao Invalida!\n");
                break;
        }

    } while (option != 0); // O programa continua até o usuário escolher sair

    return 0;
}
