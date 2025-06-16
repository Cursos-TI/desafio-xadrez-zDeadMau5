#include <stdio.h>
#include <stdlib.h> // Incluído para funções de sistema como system("pause")

/*
 * Este programa simula o movimento de quatro peças de xadrez: Torre, Bispo, Rainha e Cavalo.
 * Cada peça utiliza uma estrutura de repetição específica para representar seu movimento
 * e imprime a direção a cada passo.
 */
int main() {

    // --- Definição de Constantes para os Movimentos ---
    // Define o número de casas que cada peça irá se mover.
    const int casasMovimentoTorre = 5;
    const int casasMovimentoBispo = 5;
    const int casasMovimentoRainha = 8;

    // Define os passos para o movimento em "L" do Cavalo.
    const int casasParaBaixoCavalo = 2;
    const int casasParaEsquerdaCavalo = 1;


    // --- Simulação do Movimento da Torre ---
    // A Torre move-se em linha reta. Usaremos um laço 'for' para simular
    // o movimento de 5 casas para a direita.
    printf("--- Movimento da Torre (5 casas para a direita) ---\n");
    for (int i = 0; i < casasMovimentoTorre; i++) {
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
    printf("\n"); // Adiciona uma linha em branco


    // --- Simulação do Movimento da Rainha ---
    // A Rainha pode se mover em qualquer direção. Usaremos um laço 'do-while'
    // para simular o movimento de 8 casas para a esquerda.
    printf("--- Movimento da Rainha (8 casas para a esquerda) ---\n");
    int contadorRainha = 0;
    do {
        // Imprime a direção do movimento a cada casa.
        printf("Esquerda\n");
        contadorRainha++; // Incrementa o contador
    } while (contadorRainha < casasMovimentoRainha);
    printf("\n");


    // --- Simulação do Movimento do Cavalo ---
    // O Cavalo move-se em "L": 2 casas em uma direção e 1 em uma direção perpendicular.
    // Usaremos um laço 'for' externo que executa uma vez, para conter os loops
    // aninhados que representam as partes sequenciais do movimento.
    printf("--- Movimento do Cavalo (2 para baixo, 1 para a esquerda) ---\n");
    
    // O laço 'for' externo serve como um container para o movimento completo em "L",
    // permitindo que os laços internos sejam considerados "aninhados".
    for (int movimentoCompleto = 0; movimentoCompleto < 1; movimentoCompleto++) {
        
        // Loop 'while' aninhado para simular os dois passos para baixo.
        int passosVerticais = 0;
        while (passosVerticais < casasParaBaixoCavalo) {
            printf("Baixo\n");
            passosVerticais++;
        }
        
        // Loop 'while' aninhado para simular o passo para a esquerda.
        int passosHorizontais = 0;
        while (passosHorizontais < casasParaEsquerdaCavalo) {
            printf("Esquerda\n");
            passosHorizontais++;
        }
    }
    printf("\n");

    // Pausa o console em alguns sistemas operacionais para que a saída possa ser lida.
    // system("pause"); // Descomente se estiver no Windows

    return 0; // Indica que o programa foi executado com sucesso.
}