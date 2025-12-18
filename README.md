# 🎴 Super Trunfo em C - Desafio Nível Mestre

Este repositório contém a versão final do projeto Super Trunfo de Países, desenvolvida como parte do desafio de lógica de programação em C. O sistema permite o cadastro de cartas e realiza duelos inteligentes baseados em múltiplos atributos.

## 🚀 Funcionalidades do Nível Mestre
- **Cadastro Dinâmico**: Leitura de dados de cidades incluindo População, Área, PIB e Pontos Turísticos.
- **Cálculos Automáticos**: O sistema gera a Densidade Populacional e o PIB per Capita de cada carta.
- **Menu Interativo Dinâmico**: Utiliza `switch-case` para permitir que o jogador escolha dois atributos diferentes para a comparação.
- **Lógica Anti-Duplicidade**: O segundo menu oculta automaticamente a opção escolhida no primeiro, impedindo comparações repetidas.
- **Veredito por Soma**: Os valores dos dois atributos escolhidos são somados para determinar a carta vencedora.
- **Operador Ternário**: Implementação de decisões rápidas e limpas no código.

## 🎮 Como Jogar
1. Ao iniciar, insira as informações solicitadas para a **Carta 1** e a **Carta 2**.
2. No primeiro menu, digite o número (1 a 5) do primeiro atributo que deseja comparar.
3. No segundo menu, escolha o segundo atributo (o sistema avisará se você tentar escolher o mesmo).
4. O programa exibirá os valores individuais, a soma total e declarará o vencedor ou **Empate**.

## 💻 Conceitos Aplicados
* **Variáveis:** `int`, `float`, `char` e vetores de caracteres (strings).
* **Entrada/Saída:** `scanf` (com limpeza de buffer) e `printf` formatado.
* **Controle de Fluxo:** `switch-case` e `if-else` aninhados.
* **Matemática:** Operações aritméticas e casting de tipos.
