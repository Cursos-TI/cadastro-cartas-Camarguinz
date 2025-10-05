#include <stdio.h>


int main() {

    
    // Declaração das variáveis para as duas cartas
    char estado1[30], estado2[30];
    char codigo1[5], codigo2[5];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2; 
    float densidadepop1, densidadepop2;
    float pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;

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

    // Cálculo dos atributos adicionais

    densidadepop1 = populacao1 / area1;
    densidadepop2 = populacao2 / area2;
    pibpercapita1 = (pib1 * 1000000000) / populacao1; // PIB em reais dividido pela população
    pibpercapita2 = (pib2 * 1000000000) / populacao2; // PIB em reais dividido pela população

    // Cálculo do Superpoder (usa conversão implicita de int para float)
    // O valor da densidade populacional é invertido para que menor densidade resulte em maior superpoder (porem é insignificante)
    superpoder1 = (populacao1 + area1 + pib1 + pontos_turisticos1 + (1/densidadepop1) + pibpercapita1);
    superpoder2 = (populacao2 + area2 + pib2 + pontos_turisticos2 + (1/densidadepop2) + pibpercapita2);


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
    printf("Densidade Populacional: %.2f habitantes por Km²\n", densidadepop1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
    printf("Superpoder: %.2f\n", superpoder1);

    // Carta 2

    printf("\nCARTA 2:\n\n");
    printf("País: %s", estado2);
    printf("Código: %s", codigo2);
    printf("Cidade: %s", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f habitantes por Km²\n", densidadepop2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    printf("Superpoder: %.2f\n", superpoder2);

    //Limpeza do buffer
    while ((c = getchar()) != '\n' && c != EOF);


    // COMPARAÇÃO DE CARTAS(ATRIBUTOS)

    printf("\n\nVamos comparar os atributos das cartas!\n\n");
    
    // Comparação da população
    if (populacao1 > populacao2) {
        printf("População: A Carta 1 venceu (1)\n");
    } else if (populacao1 < populacao2) {
        printf("População: A Carta 2 venceu (0)\n");
    } else {
        printf("População: Empate\n");       
    }

    // Comparação da área
    if (area1 > area2) {
        printf("Área: A Carta 1 venceu (1)\n");
    } else if (area1 < area2) {
        printf("Área: A Carta 2 venceu (0)\n");
    } else {
        printf("Área: Empate\n");       
    }

    // Comparação do PIB
    if (pib1 > pib2) {
        printf("PIB: A Carta 1 venceu (1) \n");
    } else if (pib1 < pib2) {
        printf("PIB: A Carta 2 venceu (0) \n");
    } else {
        printf("PIB: Empate\n");       
    }

    // Comparação do número de pontos turísticos
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Número de Pontos Turísticos: A Carta 1 venceu (1) \n");
    } else if (pontos_turisticos1 < pontos_turisticos2) {
        printf("Número de Pontos Turísticos: A Carta 2 venceu (0) \n");
    } else {
        printf("Número de Pontos Turísticos: Empate\n");       
    }

    // Comparação da densidade populacional
    if (densidadepop1 < densidadepop2) {
        printf("Densidade Populacional: A Carta 1 venceu (1) \n");
    } else if (densidadepop1 > densidadepop2) {
        printf("Densidade Populacional: A Carta 2 venceu (0) \n");
    } else {
        printf("Densidade Populacional: Empate\n");       
    }

    // Comparação do PIB per capita
    if (pibpercapita1 > pibpercapita2) {
        printf("PIB per Capita: A Carta 1 venceu (1) \n");
    } else if (pibpercapita1 < pibpercapita2) {
        printf("PIB per Capita: A Carta 2 venceu (0) \n");
    } else {
        printf("PIB per Capita: Empate\n");       
    }

    // Comparação do Superpoder
    if (superpoder1 > superpoder2) {
        printf("Superpoder: A Carta 1 venceu (1) \n");
    } else if (superpoder1 < superpoder2) {
        printf("Superpoder: A Carta 2 venceu (0) \n");
    } else {
        printf("Superpoder: Empate\n");       
    }

    // Comparação final - qual carta venceu mais atributos
    int vitorias1 = 0, vitorias2 = 0;
    if (populacao1 > populacao2) vitorias1++; else if (populacao1 < populacao2) vitorias2++;
    if (area1 > area2) vitorias1++; else if (area1 < area2) vitorias2++;
    if (pib1 > pib2) vitorias1++; else if (pib1 < pib2) vitorias2++;
    if (pontos_turisticos1 > pontos_turisticos2) vitorias1++; else if (pontos_turisticos1 < pontos_turisticos2) vitorias2++;
    if (densidadepop1 < densidadepop2) vitorias1++; else if (densidadepop1 > densidadepop2) vitorias2++;
    if (pibpercapita1 > pibpercapita2) vitorias1++; else if (pibpercapita1 < pibpercapita2) vitorias2++;
    if (superpoder1 > superpoder2) vitorias1++; else if (superpoder1 < superpoder2) vitorias2++;

    if (vitorias1 > vitorias2) {
        printf("\n\n |||||  Resultado Final: A Carta 1 é a vencedora!  |||||\n");
    } else if (vitorias1 < vitorias2) {
        printf("\n\n |||||  Resultado Final: A Carta 2 é a vencedora!  |||||\n");
    } else {
        printf("\n\n |||||  Resultado Final: Empate entre as cartas!   |||||\n");
    }

    //////////////////////
    // Fechamento do executável
    printf("\n\n Pressione Enter para fechar o programa...");
    getchar(); // Espera o usuário pressionar Enter
    
    return 0;
}
