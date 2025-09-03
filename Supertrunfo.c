#include <stdio.h>

int main() {
    // ===== Declaração das variáveis da Carta 1 =====
    char estado1;
    char codigo1[4];        // Ex: "A01"
    char nomeCidade1[50];   // Nome da cidade
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // ===== Declaração das variáveis da Carta 2 =====
    char estado2;
    char codigo2[4];        
    char nomeCidade2[50];   
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // ===== Entrada de dados da Carta 1 =====
    printf("Cadastro da Carta 1:\n");
    printf("Informe o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Informe o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);  // lê a string com espaços

    printf("Informe a populacao: ");
    scanf("%d", &populacao1);

    printf("Informe a area (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // ===== Entrada de dados da Carta 2 =====
    printf("Cadastro da Carta 2:\n");
    printf("Informe o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Informe a populacao: ");
    scanf("%d", &populacao2);

    printf("Informe a area (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n");

    // ===== Saída formatada =====
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}

