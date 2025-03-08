#include <stdio.h>

int main() {
    printf("NOVATO - Desafio Super Trunfo!\n");
    
    // Declaração das variáveis para armazenar os dados das cartas
    char estado1, estado2;
    char codigoCidade1[5], codigoCidade2[5];
    char nomeCidade1[50], nomeCidade2[50];
    int populacaoCidade1, populacaoCidade2;
    float areaCidade1, areaCidade2;
    float pibCidade1, pibCidade2;
    int pontosTuristicosCidade1, pontosTuristicosCidade2;

    // Leitura dos dados da Carta 1
    printf("Digite o estado da Carta 1 (A-H): ");
    scanf(" %c", &estado1);
    getchar();
    printf("Digite o código da Carta 1 (%c01-%c04): ", estado1, estado1);
    scanf(" %s", codigoCidade1);
    getchar();
    printf("Digite o nome da Cidade da Carta 1: ");
    scanf(" %49s", nomeCidade1);
    getchar();
    printf("Digite a população da Cidade da Carta 1: ");
    scanf(" %d", &populacaoCidade1);
    getchar();
    printf("Digite a área da Cidade da Carta 1 (em km²): ");
    scanf(" %f", &areaCidade1);
    getchar();
    printf("Digite o PIB da Cidade da Carta 1 (em bilhões de reais): ");
    scanf(" %f", &pibCidade1);
    getchar();
    printf("Digite o número de pontos turísticos da Cidade da Carta 1: ");
    scanf(" %d", &pontosTuristicosCidade1);
    getchar();

    // Leitura dos dados da Carta 2
    printf("\nDigite o estado da Carta 2 (A-H): ");
    scanf(" %c", &estado2);
    getchar();
    printf("Digite o código da Carta 2 (%c01-%c04): ", estado2, estado2);
    scanf(" %s", codigoCidade2);
    getchar();
    printf("Digite o nome da Cidade da Carta 2: ");
    scanf(" %49s", nomeCidade2);
    getchar();
    printf("Digite a população da Cidade da Carta 2: ");
    scanf(" %d", &populacaoCidade2);
    getchar();
    printf("Digite a área da Cidade da Carta 2 (em km²): ");
    scanf(" %f", &areaCidade2);
    getchar();
    printf("Digite o PIB da Cidade da Carta 2 (em bilhões de reais): ");
    scanf(" %f", &pibCidade2);
    getchar();
    printf("Digite o número de pontos turísticos da Cidade da Carta 2: ");
    scanf(" %d", &pontosTuristicosCidade2);
    getchar();

    // Exibição dos dados das Cartas
    printf("\nDados das Cartas:\n");
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCidade1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacaoCidade1);
    printf("Área: %.2f km²\n", areaCidade1);
    printf("PIB: %.2f bilhões de reais\n", pibCidade1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosCidade1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCidade2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacaoCidade2);
    printf("Área: %.2f km²\n", areaCidade2);
    printf("PIB: %.2f bilhões de reais\n", pibCidade2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosCidade2);

    return 0;

}