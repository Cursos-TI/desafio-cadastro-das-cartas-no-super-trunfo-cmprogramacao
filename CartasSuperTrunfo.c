#include <stdio.h>

int main(){
    
    // Desafio Super Trunfo - Países
    printf("\n");
    printf("===== Desafio Super Trunfo - Países =====\n");

    // Tema 1 - Cadastro das Cartas
    printf("\n");
    printf(">>> Cadastro das Cartas <<<\n");

    // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
    // Siga os comentários para implementar cada parte do desafio.
    // Executado por Carlos Marcilio
    printf("\n");
    printf("... Pressione Enter para continuar ...\n");
    scanf("%*c"); // aguarda Enter

    // Carta 1
    char estado1[2]; // Ex: 'A'
    char codigo1[4]; // Ex: '1'
    char cidade1[50]; // Ex: "São Paulo"
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // Cadastro da Carta 1
    printf("\n>>> Cadastro da Carta 1 <<<\n");
    printf("\n");
    printf("Digite uma Letra Maiúscula entre A-D: ");
    scanf("%s", estado1);

    printf("Digite um Número entre 01-04: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1); // permite espaços

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Carta 2
    char estado2[2];
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // Cadastro da Carta 2
    printf("\n");
    printf("\n>>> Cadastro da Carta 2 <<<\n");
    printf("\n");
    printf("Digite uma Letra Maiúscula entre A-D: ");
    scanf("%s", estado2);

    printf("Digite um Número entre 01-04: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    float superPoder1, superPoder2;

    // Exibição dos Dados das Cartas
    printf("\n\n");
    printf(" >>>>> Resultado das Cartas <<<<<\n\n");
    printf(">>> Carta 1 <<<\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s%02s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);

    printf("\n");
    printf(">>> Carta 2 <<<\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s%02s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    //Desafio: nível mestre - Calcular o Super Poder - Comparar as Cartas - Exibir os Resultados das Comparações
    printf("\n>>> Comparação de Cartas <<<\n\n");

    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2 ? 1 : 0);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2 ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2 ? 1 : 0);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 2, pontosTuristicos1 > pontosTuristicos2 ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2 ? 1 : 2, densidadePopulacional1 < densidadePopulacional2 ? 1 : 0); // menor vence
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibPerCapita1 > pibPerCapita2 ? 1 : 2, pibPerCapita1 > pibPerCapita2 ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2 ? 1 : 0);
    

    printf("\n>>> Vencedor <<<\n\n");
    printf("Carta %d venceu com o maior Super Poder!\n", superPoder1 > superPoder2 ? 1 : 2);

    printf("\n\n");
    printf("Obrigado! Forte Abraço! \n\n");
    printf("Fim! \n\n");
    
    return 0;
}