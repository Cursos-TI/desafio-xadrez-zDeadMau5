#include <stdio.h>
#include <stdlib.h> // Incluído para funções de sistema como system("pause")

/*
 * Este programa simula o movimento de três peças de xadrez: Torre, Bispo e Rainha.
 * Cada peça utiliza uma estrutura de repetição diferente (for, while, do-while)
 * para representar seu movimento e imprime a direção a cada passo.
 */
int main() {

    // Define o número de casas que cada peça irá se mover.
    const int casasMovimentoTorre = 5;
    const int casasMovimentoBispo = 5;
    const int casasMovimentoRainha = 8;

    // --- Simulação do Movimento da Torre ---
    // A Torre move-se em linha reta. Usaremos um laço 'for' para simular
    // o movimento de 5 casas para a direita.
    printf("--- Movimento da Torre (5 casas para a direita) ---\n");
    int i;
    for (i = 0; i < casasMovimentoTorre; i++) {
        // Imprime a direção do movimento a cada casa percorrida.
        printf("Direita\n");
    }
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    // --- Simulação do Movimento do Bispo ---
    // O Bispo move-se na diagonal. Usaremos um laço 'while' para simular
    // o movimento de 5 casas na diagonal para cima e para a direita.
    printf("--- Movimento do Bispo (5 casas para cima e direita) ---\n");
    int contadorBispo = 0;
    while (contadorBispo < casasMovimentoBispo) {
        // Para representar a diagonal, imprimimos a combinação das direções.
        printf("Cima, Direita\n");
        contadorBispo++; // Incrementa o contador para controlar o laço
    }
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    // --- Simulação do Movimento da Rainha ---
    // A Rainha pode se mover em qualquer direção. Usaremos um laço 'do-while'
    // para simular o movimento de 8 casas para a esquerda.
    printf("--- Movimento da Rainha (8 casas para a esquerda) ---\n");
    int contadorRainha = 0;
    // O laço do-while executa o bloco de código pelo menos uma vez antes de
    // verificar a condição.
    do {
        // Imprime a direção do movimento a cada casa.
        printf("Esquerda\n");
        contadorRainha++; // Incrementa o contador
    } while (contadorRainha < casasMovimentoRainha);
    printf("\n");

    // Pausa o console em alguns sistemas operacionais para que a saída possa ser lida.
    // system("pause"); // Descomente se estiver no Windows

    return 0; // Indica que o programa foi executado com sucesso.
}