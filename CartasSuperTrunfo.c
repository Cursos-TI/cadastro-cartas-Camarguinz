#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

    
    // Declaração das variáveis para as duas cartas
    char estado1[30], estado2[30];
    char codigo1[5], codigo2[5];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    int c; // Variavel para limpeza do buffer
    
    // Introdução ao programa

    printf("Seja bem vindo ao SuperTrunfo Países!\n\n");
    printf("O objetivo do jogo é simples: você e o computador irão comparar atributos de países.\n\n");
    printf("Primeiro você irá cadastrar dois países, cada um com os seguintes atribuitos:\n\n");
    printf("- Estado\n");
    printf("- Código da Carta\n");
    printf("- Nome da Cidade\n");
    printf("- População \n");
    printf("- Área (em km²)\n");
    printf("- PIB\n");
    printf("- Número de Pontos Turísticos\n\n");
    printf("Vamos prosseguir com a criação das cartas!\n\n");
  // Área para entrada de dados

  // Entrada de dados para a Carta 1
    printf("CARTA 1:\n\n");
    printf("Digite o nome do País: ");
    fgets(estado1, sizeof(estado1), stdin);
    printf("Código da Carta (1 Letra + 2 Números): ");
    fgets(codigo1, sizeof(codigo1), stdin);
    printf("Digite o nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    printf("Digite a População: ");
    scanf("%d", &populacao1);
    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em Bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    printf("\n\n -- Carta 1 Registrada com sucesso! --\n\n");

    /*
    Limpa o buffer de entrada (stdin) após scanf, consumindo todos os caracteres restantes
    até o final da linha (\n) ou EOF. Evita que fgets ou próximas leituras sejam puladas.
    */
    while ((c = getchar()) != '\n' && c != EOF);


    // Entrada de dados para a Carta 2
    printf("CARTA 2:\n\n");
    printf("Digite o nome do País: ");
    fgets(estado2, sizeof(estado2), stdin);
    printf("Código da Carta (1 Letra + 2 Números): ");
    fgets(codigo2, sizeof(codigo2), stdin);
    printf("Digite o nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    printf("Digite a População: ");
    scanf("%d", &populacao2);
    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em Bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    printf("\n\nCarta 2 Registrada com sucesso!\n\n");

  // Área para exibição dos dados da cidade

  // Exibição das cartas registradas

    // Carta 1

    printf("\nCARTA 1:\n\n");
    printf("País: %s", estado1);
    printf("Código: %s", codigo1);
    printf("Cidade: %s", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    // Carta 2

    printf("\nCARTA 2:\n\n");
    printf("País: %s", estado2);
    printf("Código: %s", codigo2);
    printf("Cidade: %s", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    //Limpeza do buffer
    while ((c = getchar()) != '\n' && c != EOF);

    // Fechamento do executável
    printf("\n\n Pressione Enter para fechar o programa...");
    getchar(); // Espera o usuário pressionar Enter

return 0;
} 
