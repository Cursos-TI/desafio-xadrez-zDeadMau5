SIMULADOR DE MOVIMENTO DE PEÇAS DE XADREZ EM C
==============================================

Este projeto consiste em um programa de console escrito em linguagem C que simula o movimento de quatro peças de xadrez: a Torre, o Bispo, a Rainha e o Cavalo. O objetivo principal é demonstrar diferentes técnicas de programação, incluindo RECURSIVIDADE, LOOPS ANINHADOS e CONTROLE DE FLUXO AVANÇADO com 'continue'.


RECURSOS DEMONSTRADOS
---------------------

O programa utiliza uma abordagem diferente para cada peça, a fim de ilustrar diversos conceitos de programação:

* Torre: Movimento linear simulado através de uma função RECURSIVA.
* Bispo: Movimento diagonal simulado combinando RECURSIVIDADE com LOOPS ANINHADOS triviais dentro de cada chamada recursiva.
* Rainha: Movimento linear simulado através de uma função RECURSIVA.
* Cavalo: Movimento em "L" implementado com um LOOP 'for' COMPLEXO, que utiliza múltiplas variáveis de estado e a instrução 'continue' para controlar a lógica sequencial do movimento.


PRÉ-REQUISITOS
--------------

Para compilar e executar este programa, você precisará de:
* Um sistema operacional (Linux, macOS, Windows com WSL, etc.).
* Um compilador C instalado, como o GCC (GNU Compiler Collection).


COMO COMPILAR E EXECUTAR
------------------------

Siga os passos abaixo para rodar o programa a partir do seu terminal.

1. Salve o Código
   Primeiramente, salve o código fornecido em um arquivo chamado `simulador_xadrez.c`.

2. Abra um Terminal
   Navegue até o diretório onde você salvou o arquivo `simulador_xadrez.c`.

3. Compile o Programa
   Execute o seguinte comando para compilar o código. Este comando irá ler o seu arquivo fonte (`simulador_xadrez.c`) e criar um arquivo executável chamado `simulador_xadrez`.

   gcc simulador_xadrez.c -o simulador_xadrez

4. Execute o Programa
   Após a compilação bem-sucedida, execute o programa com o seguinte comando:

   ./simulador_xadrez


SAÍDA ESPERADA
--------------

Ao executar o programa, você verá a seguinte saída no seu console, mostrando o log de movimento para cada uma das quatro peças:

--- Movimento da Torre (5 casas para a direita) ---
Direita
Direita
Direita
Direita
Direita

--- Movimento do Bispo (5 casas para cima e direita) ---
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita

--- Movimento da Rainha (8 casas para a esquerda) ---
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda

--- Movimento do Cavalo (2 para cima, 1 para a direita) ---
Cima
Cima
Direita


ESTRUTURA DO CÓDIGO
-------------------

O código-fonte está organizado da seguinte forma para garantir legibilidade e boas práticas:

* Protótipos de Funções: As funções recursivas são declaradas no topo, antes da 'main', para que o compilador saiba de suas existências antes de serem chamadas.
* Função 'main': Atua como o ponto de entrada e o orquestrador principal, chamando as simulações para cada peça em sequência.
* Implementação das Funções: As definições completas das funções recursivas são colocadas após a 'main'.
* Constantes: Os parâmetros de movimento (número de casas, etc.) são definidos como constantes no início da 'main', facilitando futuras modificações.
* Comentários: O código é extensivamente comentado para explicar a lógica por trás da recursividade, dos loops complexos e das decisões de implementação.