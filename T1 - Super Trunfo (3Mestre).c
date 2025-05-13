#include <stdio.h>

int main() {
    // Variáveis da 1° Cidade:
    char estado1[3]; // Vai armazenar a letra do estado (array de 3 caractere)
    char cod_carta1[5]; // Vai armazenar o código da carta (array de 4 caracteres, incluindo o terminador nulo)
    char nome_cid1[20]; // Vai armazenar o nome da cidade (array de 20 caracteres)
    unsigned long int populacao1; // Vai armazenar o número da população (números sem casas decimais)
    float area1; // Vai armazenar o tamanho da área da cidade (números com casas decimais)
    float pib1; // Vai armazenar a quantidade do PIB da cidade (números com casas decimais)
    int num_pt1; // Vai armazenar o número de pontos turísticos (números sem casas decimais)
    float densidade1; // Vai armazenar a densidade populacional da cidade (números com casas decimais)
    float pib_per_capita1; // Vai armazenar o PIB per capita da cidade (números com casas decimais)
    float super_poder1; // Vai armazenar o Super Poder da cidade (números com casas decimais)

    // Recebendo dados da 1° Cidade
    printf("Dados da 1° Carta:\n");
    printf("Digite a primeira sigla do estado: ");
    scanf("%s", &estado1);
    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", cod_carta1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cid1);
    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);
    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &num_pt1);
    printf("\n");

    // Calculando a densidade demográfica, o PIB per capita e Super Poder da 1° cidade
    densidade1 = (float) populacao1 / area1; // "populacao" e "area" são convertidos para float
    pib_per_capita1 = (float) pib1 / populacao1; // Cálculo do PIB per capita
    super_poder1 = populacao1 + area1 + pib1 + num_pt1 + pib_per_capita1 - densidade1; // Cálculo do Super Poder

    // Variáveis da 2° Cidade:
    char estado2[3]; // Vai armazenar a letra do estado (array de 1 caractere)
    char cod_carta2[5]; // Vai armazenar o código da carta (array de 4 caracteres, incluindo o terminador nulo)
    char nome_cid2[20]; // Vai armazenar o nome da cidade (array de 20 caracteres)
    unsigned long int populacao2; // Vai armazenar o número da população (números sem casas decimais)
    float area2; // Vai armazenar o tamanho da área da cidade (números com casas decimais)
    float pib2; // Vai armazenar a quantidade do PIB da cidade (números com casas decimais)
    int num_pt2; // Vai armazenar o número de pontos turísticos (números sem casas decimais)
    float densidade2; // Vai armazenar a densidade populacional da cidade (números com casas decimais)
    float pib_per_capita2; // Vai armazenar o PIB per capita da cidade (números com casas decimais)
    float super_poder2; // Vai armazenar o Super Poder da cidade (números com casas decimais)

    // Recebendo dados da 2° Cidade
    printf("Dados da 2° Carta:\n");
    printf("Digite a primeira sigla do estado: ");
    scanf("%s", &estado2);
    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", cod_carta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cid2);
    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);
    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &num_pt2);
    printf("\n");

    // Calculando a densidade demográfica e o PIB per capita da 2° cidade
    densidade2 = (float) populacao2 / area2; // "populacao" e "area" são convertidos para float
    pib_per_capita2 = (float) pib2 / populacao2; // Cálculo do PIB per capita
    super_poder2 = populacao2 + area2 + pib2 + num_pt2 + pib_per_capita2 - densidade2; // Cálculo do Super Poder

    // Comparação de Cidades
    printf("Comparando as cartas:\n");
    printf("\n");

    populacao1 > populacao2 ? printf("População: Carta 1 venceu (1)\n") : printf("População: Carta 2 venceu (0)\n");
    area1 > area2 ? printf("Área: Carta 1 venceu (1)\n") : printf("Área: Carta 2 venceu (0)\n");
    pib1 > pib2 ? printf("PIB: Carta 1 venceu (1)\n") : printf("PIB: Carta 2 venceu (0)\n");
    num_pt1 > num_pt2 ? printf("Pontos turísticos: Carta 1 venceu (1)\n") : printf("Pontos turísticos: Carta 2 venceu (0)\n");
    densidade2 > densidade1 ? printf("Desindade Demográfica: Carta 1 venceu (1)\n") : printf("Desindade Demográfica: Carta 2 venceu (0)\n");
    pib_per_capita1 > pib_per_capita2 ? printf("PIB per Capita: Carta 1 venceu (1)\n") : printf("PIB per Capita: Carta 2 venceu (0)\n");
    super_poder1 > super_poder2 ? printf("Super Poder: Carta 1 venceu (1)\n") : printf("Super Poder: Carta 2 venceu (0)\n");
    printf("\n");

    return 0;
}
