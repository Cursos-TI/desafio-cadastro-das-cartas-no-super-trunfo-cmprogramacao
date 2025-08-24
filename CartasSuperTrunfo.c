    #include <stdio.h>

    int main() {
    // Desafio Super Trunfo - Países
    printf("Desafio Super Trunfo - Países\n");
    // Tema 1 - Cadastro das Cartas
    printf("Cadastro das Cartas\n");
    // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
    // Siga os comentários para implementar cada parte do desafio.
    // Executado por Carlos Marcilio

    printf("Pressione Enter para continuar...\n");
    scanf("%*c"); // aguarda Enter e descarta

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Carta 1
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("---Cadastro da Carta 1---\n");
    printf("Código da cidade (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", nome1);
    
    printf("População: ");
    scanf("%d", &populacao1);
    scanf("%*c");

    printf("Área (em km²): ");
    scanf("%f", &area1);
    scanf("%*c");

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    scanf("%*c");

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    scanf("%*c");

    printf("\n---Cadastro da Carta 2---\n");
    printf("Código da cidade (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    scanf("%*c");

    printf("Área (em km²): ");
    scanf("%f", &area2);
    scanf("%*c");

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    scanf("%*c");

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    scanf("%*c");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n--- Dados da Carta 1 ---\n");
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.0f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.0f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}