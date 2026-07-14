#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    // Variáveis
    char estado1[2], estado2[2];
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];

    unsigned long int populacao1, populacao2;

    float area1, area2;
    float pib1, pib2;

    int turistico1, turistico2;

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Entrada da Carta 1
    printf("=== Carta 1 ===\n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &turistico1);

    // Entrada da Carta 2
    printf("\n=== Carta 2 ===\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &turistico2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    superPoder1 = (float)populacao1 +
                  area1 +
                  pib1 +
                  turistico1 +
                  pibPerCapita1 +
                  (1.0f / densidade1);

    superPoder2 = (float)populacao2 +
                  area2 +
                  pib2 +
                  turistico2 +
                  pibPerCapita2 +
                  (1.0f / densidade2);

    // Exibição das cartas
    printf("\n================ CARTA 1 ================\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.6f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n================ CARTA 2 ================\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.6f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações
    printf("\n========== COMPARACAO DE CARTAS ==========\n");

    printf("Populacao: %d\n", populacao1 > populacao2);

    printf("Area: %d\n", area1 > area2);

    printf("PIB: %d\n", pib1 > pib2);

    printf("Pontos Turisticos: %d\n", turistico1 > turistico2);

    printf("Densidade Populacional: %d\n", densidade1 < densidade2);

    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);

    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;
}
