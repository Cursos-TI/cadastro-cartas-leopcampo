#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {

    // Variáveis
    char estado1[2], estado2[2];
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;
    float densidade1, densidade2;
    float pibPerCapta1, pibPerCapta2;

    
    // Entrada dos dados

    printf("Digite o primeiro estado: ");
    scanf("%s", estado1);

    printf("Digite o segundo estado: ");
    scanf("%s", estado2);

    printf("Digite o primeiro codigo: ");
    scanf("%s", codigo1);

    printf("Digite o segundo codigo: ");
    scanf("%s", codigo2);

    printf("Digite a primeira cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a segunda cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a primeira população: ");
    scanf("%d", &populacao1);

    printf("Digite a segunda população: ");
    scanf("%d", &populacao2);

    printf("Digite a primeira área: ");
    scanf("%f", &area1);

    printf("Digite a segunda área: ");
    scanf("%f", &area2);

    printf("Digite o primeiro PIB: ");
    scanf("%f", &pib1);

    printf("Digite o segundo PIB: ");
    scanf("%f", &pib2);

    printf("Digite a primeira quantidade de pontos turísticos: ");
    scanf("%d", &turistico1);

    printf("Digite a segunda quantidade de pontos turísticos: ");
    scanf("%d", &turistico2);

    densidade1 = populacao1 / area1;

    densidade2 = populacao2 / area2;

    pibPerCapta1 = pib1 / populacao1;
    pibPerCapta2 = pib2 / populacao2;

    // Exibição dos dados

    printf("\n==============================\n");
    printf("Carta 1\n");
    printf("==============================\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²", densidade1);
    printf("PIB per Capita : %.2f reais", pibPerCapta1);

    printf("\n==============================\n");
    printf("Carta 2\n");
    printf("==============================\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²", densidade2);
    printf("PIB per Capita : %.2f reais", pibPerCapta2);

    return 0;
}
