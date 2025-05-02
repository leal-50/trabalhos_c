#include <stdio.h>

int main(){

    //Variáveis da 1° Cidade:
    char estado1;// Vai armazenar o a letra do estado (array de 1 caractere)
    char cod_carta1[4];// Vai armazenar o código da carta (array de 3 caractere)
    char nome_cid1[20];// Vai armazenar o nome da cidade (array de 20 caractere)
    int populacao1;// Vai armazenar o número da população (números sem casas decimais)
    float area1;// Vai armazenar o tamanho da área da cidade (números com casas decimais)
    float pib1;// Vai armazenar a quantidade do PIB da cidade (números com casas decimais)
    int num_pt1;// Vai armazenar o número de pontos turísticos (números sem casas decimais)

    //Recebendo dados da 1° Cidade
    printf("Dados da 1° Carta:\n");

    printf("Digite a primeira letra do estado: ");
    scanf(" %c", &estado1);

    printf("Digite a  letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", cod_carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cid1);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &num_pt1);


    printf("\n");
    //Variáveis da 2° Cidade:
    char estado2;// Vai armazenar o a letra do estado (array de 1 caractere)
    char cod_carta2[4];// Vai armazenar o código da carta (array de 3 caractere)
    char nome_cid2[20];// Vai armazenar o nome da cidade (array de 20 caractere)
    int populacao2;// Vai armazenar o número da população (números sem casas decimais)
    float area2;// Vai armazenar o tamanho da área da cidade (números com casas decimais)
    float pib2;// Vai armazenar a quantidade do PIB da cidade (números com casas decimais)
    int num_pt2;// Vai armazenar o número de pontos turísticos (números sem casas decimais)

    //Recebendo dados da 2° Cidade
    printf("Dados da 2° Carta:\n");

    printf("Digite a primeira letra do estado: ");
    scanf(" %c", &estado2);

    printf("Digite a  letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", cod_carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cid2);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &num_pt2);


    printf("\n");
    //Imprimindo na tela dados da 1° Cidade
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", cod_carta1);
    printf("Nome da Cidade: %s \n", nome_cid1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f Km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Números de Pontos Turísticos: %d \n", num_pt1);


    printf("\n");
    //Imprimindo na tela dados da 2° Cidade
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", cod_carta2);
    printf("Nome da Cidade: %s \n", nome_cid2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Números de Pontos Turísticos: %d \n", num_pt2);

    return 0;
}
