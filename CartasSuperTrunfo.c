#include <stdio.h>

int main() {

    // ==========================================================
    //  VARIAVEIS
    // ==========================================================
    char estado1;
    char codigo1[4];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1, pibPerCapita1;


    char estado2;
    char codigo2[4];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
     float densidade2, pibPerCapita2;
    //=========================================
    // Variaveis para a lógica do Nivel Mestre
    //=========================================
    int opcao1, opcao2;
    float valorA1_C1, valorA1_C2, valorA2_C1, valorA2_C2;
    char nomeA1[25], nomeA2[25];

    // ==========================================================
    //  LEITURA DOS DADOS (CARTA 1)
    // ==========================================================
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Digite o estado (A a H):\n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01):\n");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade (sem espacos):\n");
    scanf("%29s", cidade1);

    printf("Digite a populacao da cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade em km2:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%d", &pontos1);

    printf("\n");

    // ==========================================================
    //  LEITURA DOS DADOS (CARTA 2)
    // ==========================================================
    printf("--- Cadastro da Carta 2 ---\n");

    printf("Digite o estado (A a H):\n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02):\n");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade (sem espacos):\n");
    scanf("%29s", cidade2);

    printf("Digite a populacao da cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade em km2:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%d", &pontos2);

    printf("\n");

    // ==========================================================
    //  EXIBICAO DAS INFORMACOES
    // ==========================================================

    printf("======================================\n");
    printf("           CARTAS CADASTRADAS         \n");
    printf("======================================\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n\n", pontos1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);

    printf("======================================\n");

    // ==========================================================
    //  CÁLCULOS (DENSIDADE E PIB PER CAPITA)
    // ==========================================================
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição dos novos dados calculados (Opcional - Adicione se quiser ver os valores)
    printf("Densidade Populacional Carta 1: %.2f\n", densidade1);
    printf("PIB per Capita Carta 1: %.2f\n", pibPerCapita1);
    printf("Densidade Populacional Carta 2: %.2f\n", densidade2);
    printf("PIB per Capita Carta 2: %.2f\n\n", pibPerCapita2);

   // ==========================================================
    //  MENU INTERATIVO - PRIMEIRO ATRIBUTO
    // ==========================================================
    printf("\n--- ESCOLHA O PRIMEIRO ATRIBUTO ---\n");
    printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade Demografica\n");
    printf("Escolha: ");
    scanf("%d", &opcao1);

    // Define o primeiro atributo baseado na escolha
    switch (opcao1) {
        case 1: valorA1_C1 = (float)populacao1; valorA1_C2 = (float)populacao2; sprintf(nomeA1, "Populacao"); break;
        case 2: valorA1_C1 = area1; valorA1_C2 = area2; sprintf(nomeA1, "Area"); break;
        case 3: valorA1_C1 = pib1; valorA1_C2 = pib2; sprintf(nomeA1, "PIB"); break;
        case 4: valorA1_C1 = (float)pontos1; valorA1_C2 = (float)pontos2; sprintf(nomeA1, "Pontos Turisticos"); break;
        case 5: valorA1_C1 = densidade1; valorA1_C2 = densidade2; sprintf(nomeA1, "Densidade"); break;
        default: printf("Opcao Invalida!\n"); return 0;
    }

    // ==========================================================
    //  MENU INTERATIVO - SEGUNDO ATRIBUTO (DINAMICO)
    // ==========================================================
    printf("\n--- ESCOLHA O SEGUNDO ATRIBUTO ---\n");
    if (opcao1 != 1) printf("1. Populacao\n");
    if (opcao1 != 2) printf("2. Area\n");
    if (opcao1 != 3) printf("3. PIB\n");
    if (opcao1 != 4) printf("4. Pontos Turisticos\n");
    if (opcao1 != 5) printf("5. Densidade Demografica\n");
    
    printf("Escolha: ");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2) {
        printf("Erro: Voce nao pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    // Define o segundo atributo baseado na escolha
    switch (opcao2) {
        case 1: valorA2_C1 = (float)populacao1; valorA2_C2 = (float)populacao2; sprintf(nomeA2, "Populacao"); break;
        case 2: valorA2_C1 = area1; valorA2_C2 = area2; sprintf(nomeA2, "Area"); break;
        case 3: valorA2_C1 = pib1; valorA2_C2 = pib2; sprintf(nomeA2, "PIB"); break;
        case 4: valorA2_C1 = (float)pontos1; valorA2_C2 = (float)pontos2; sprintf(nomeA2, "Pontos Turisticos"); break;
        case 5: valorA2_C1 = densidade1; valorA2_C2 = densidade2; sprintf(nomeA2, "Densidade"); break;
        default: printf("Opcao Invalida!\n"); return 0;
    }

    // ==========================================================
    //  SOMA E COMPARACAO FINAL
    // ==========================================================
    // Calculo da soma dos dois atributos para cada carta
    float soma1 = valorA1_C1 + valorA2_C1;
    float soma2 = valorA1_C2 + valorA2_C2;

    printf("\n--- RESULTADO DA COMPARACAO ---\n");
    printf("Cidade 1: %s | Cidade 2: %s\n", cidade1, cidade2);
    printf("Atributo 1 (%s): %.2f vs %.2f\n", nomeA1, valorA1_C1, valorA1_C2);
    printf("Atributo 2 (%s): %.2f vs %.2f\n", nomeA2, valorA2_C1, valorA2_C2);
    printf("Soma Total: %.2f vs %.2f\n", soma1, soma2);

    // Comparacao final usando if-else e Operador Ternario conforme solicitado
    if (soma1 == soma2) {
        printf("Resultado: Empate!\n");
    } else {
        printf("Resultado: Vitoria da Carta %d (%s)!\n", (soma1 > soma2) ? 1 : 2, (soma1 > soma2) ? cidade1 : cidade2);
    }
    return 0;
}
