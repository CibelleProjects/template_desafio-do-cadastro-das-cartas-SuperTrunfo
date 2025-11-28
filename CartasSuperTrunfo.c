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

    char estado2;
    char codigo2[4];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

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

    return 0;
}
