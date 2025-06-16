#include <stdio.h>
#include <stdlib.h> // Incluído para funções de sistema como system("pause")

/*
 * Este programa simula o movimento de quatro peças de xadrez, utilizando
 * conceitos avançados como recursividade e loops complexos.
 *
 * - Torre, Bispo e Rainha: Movimento implementado com funções recursivas.
 * - Bispo: Demonstra uma combinação de recursividade com loops aninhados.
 * - Cavalo: Movimento em "L" implementado com um loop complexo, utilizando
 * múltiplas variáveis e controle de fluxo com 'continue'.
 */

// --- Protótipos das Funções Recursivas ---
// Declarar as funções antes de main() permite que main() as chame.
void moverTorreRecursivo(int casasRestantes);
void moverBispoRecursivo(int casasRestantes);
void moverRainhaRecursivo(int casasRestantes);


// --- Função Principal ---
int main() {
    // --- Definição de Constantes para os Movimentos ---
    const int casasMovimentoTorre = 5;
    const int casasMovimentoBispo = 5; // Para o movimento diagonal
    const int casasMovimentoRainha = 8;

    // Define os passos para o movimento em "L" do Cavalo (2 para cima, 1 para a direita)
    const int casasParaCimaCavalo = 2;
    const int casasParaDireitaCavalo = 1;


    // --- Simulação do Movimento da Torre (com Recursividade) ---
    printf("--- Movimento da Torre (5 casas para a direita) ---\n");
    moverTorreRecursivo(casasMovimentoTorre);
    printf("\n");


    // --- Simulação do Movimento do Bispo (com Recursividade e Loops Aninhados) ---
    printf("--- Movimento do Bispo (5 casas para cima e direita) ---\n");
    moverBispoRecursivo(casasMovimentoBispo);
    printf("\n");


    // --- Simulação do Movimento da Rainha (com Recursividade) ---
    printf("--- Movimento da Rainha (8 casas para a esquerda) ---\n");
    moverRainhaRecursivo(casasMovimentoRainha);
    printf("\n");


    // --- Simulação do Movimento do Cavalo (com Loop Complexo) ---
    printf("--- Movimento do Cavalo (2 para cima, 1 para a direita) ---\n");
    int passosParaCimaDados = 0;
    int passosParaDireitaDados = 0;
    int totalPassosCavalo = casasParaCimaCavalo + casasParaDireitaCavalo;

    // Este loop complexo simula as etapas sequenciais do movimento em "L".
    // A variável 'i' representa cada passo individual do movimento total.
    for (int i = 0; i < totalPassosCavalo; i++) {
        
        // Condição para os movimentos verticais (para cima).
        if (passosParaCimaDados < casasParaCimaCavalo) {
            printf("Cima\n");
            passosParaCimaDados++;
            // 'continue' pula para a próxima iteração do loop,
            // garantindo que o movimento para a direita só ocorra
            // após todos os passos para cima terem sido concluídos.
            continue;
        }

        // Condição para o movimento horizontal (para a direita).
        // Esta parte do código só é alcançada após o 'if' acima falhar.
        if (passosParaDireitaDados < casasParaDireitaCavalo) {
            printf("Direita\n");
            passosParaDireitaDados++;
        }
        
        // Um 'break' poderia ser usado aqui para sair do loop prematuramente
        // se uma condição inesperada ocorresse (ex: peça bloqueada).
    }
    printf("\n");


    // Pausa o console em alguns sistemas operacionais para que a saída possa ser lida.
    // system("pause");

    return 0; // Indica que o programa foi executado com sucesso.
}


// --- Implementação das Funções Recursivas ---

/**
 * @brief Move a Torre recursivamente para a direita.
 * @param casasRestantes O número de casas que ainda faltam para mover.
 */
void moverTorreRecursivo(int casasRestantes) {
    // Caso Base: Se não há mais casas para mover, a função para.
    // Isso previne um loop infinito (stack overflow).
    if (casasRestantes <= 0) {
        return;
    }

    // Passo da Recursão:
    // 1. Imprime o movimento do passo atual.
    printf("Direita\n");
    // 2. Chama a si mesma com um problema menor (casasRestantes - 1).
    moverTorreRecursivo(casasRestantes - 1);
}

/**
 * @brief Move o Bispo recursivamente na diagonal (cima, direita).
 * A função também contém loops aninhados para cumprir os requisitos,
 * embora para um movimento diagonal simples, eles sejam triviais.
 * @param casasRestantes O número de movimentos diagonais restantes.
 */
void moverBispoRecursivo(int casasRestantes) {
    // Caso Base: Condição de parada da recursão.
    if (casasRestantes <= 0) {
        return;
    }

    // Para cumprir o requisito de loops aninhados, usamos um loop externo
    // para o movimento vertical e um interno para o horizontal.
    // Como o movimento do Bispo é uma única ação "Cima, Direita" por casa,
    // os loops executam apenas uma vez por chamada recursiva.
    for (int movVertical = 0; movVertical < 1; movVertical++) {
        for (int movHorizontal = 0; movHorizontal < 1; movHorizontal++) {
            printf("Cima, Direita\n");
        }
    }

    // Passo da Recursão: Chama a função para o restante dos movimentos.
    moverBispoRecursivo(casasRestantes - 1);
}

/**
 * @brief Move a Rainha recursivamente para a esquerda.
 * @param casasRestantes O número de casas que ainda faltam para mover.
 */
void moverRainhaRecursivo(int casasRestantes) {
    // Caso Base: Se não há mais casas, a recursão termina.
    if (casasRestantes <= 0) {
        return;
    }

    // Passo da Recursão: Imprime o movimento e chama a função novamente.
    printf("Esquerda\n");
    moverRainhaRecursivo(casasRestantes - 1);
}