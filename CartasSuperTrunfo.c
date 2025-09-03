#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    // variáveis para comparação nivel intermediário
    float densidade1, pib_per_capita1;
    float densidade2, pib_per_capita2;

   
  // Área para entrada de dados da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Digite uma letra para o Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da cidade (3 dígitos): ");
    scanf(" %3s", codigo1);
    printf("Digite o nome da cidade: ");    
    scanf(" %s", cidade1);
    printf("Digite a população da cidade: ");   
    scanf(" %d", &populacao1);
    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf(" %d", &pontos1);

    // Cálculo da densidade populacional e PIB per capita após entrada dos dados
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1e9) / (float)populacao1; // Convertendo PIB para reais
  // Área para entrada de dados da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Digite uma letra para o Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da cidade (3 dígitos): ");
    scanf(" %3s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);
    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao2);
    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib2);
    printf("Digite os pontos da cidade (0 a 100): ");
    scanf(" %d", &pontos2);

    // Cálculo da densidade populacional e PIB per capita após entrada dos dados
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1e9) / (float)populacao2; // Convertendo PIB para reais 
    

  // Área para exibição dos dados das cidades

    printf("\n--- Cartas Cadastradas ---\n");
    printf("Carta: 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);

    printf("\nCarta: 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões de rais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita2);
    
    //Variavei de resultado das comparações da carta 1 (pontuação)
    int resultadopoplacao1;
    resultadopoplacao1 = (populacao1 > populacao2);
    int resultadoarea1;
    resultadoarea1 = (area1 < area2);
    int resultadopib1;
    resultadopib1 = (pib1 > pib2);
    int resultadopontos1;
    resultadopontos1 = (pontos1 > pontos2);
    int resultadodensidade1;
    resultadodensidade1 = (densidade1 < densidade2);
    int resultadopib_per_capita1;
    resultadopib_per_capita1 = (pib_per_capita1 > pib_per_capita2);

    //Variavei de resultado das comparações da carta 2 (pontuação)
    int resultadopoplacao2;
    resultadopoplacao2 = (populacao2 > populacao1);
    int resultadoarea2;
    resultadoarea2 = (area2 < area1);
    int resultadopib2;
    resultadopib2 = (pib2 > pib1);
    int resultadopontos2;
    resultadopontos2 = (pontos2 > pontos1);
    int resultadodensidade2;
    resultadodensidade2 = (densidade2 < densidade1);
    int resultadopib_per_capita2;
    resultadopib_per_capita2 = (pib_per_capita2 > pib_per_capita1);
    
    //Supertrufo - soma de todas as comparações
    float supertrunfo1 = populacao1 + area1 + pib1 + pontos1 + pib_per_capita1;
    float supertrunfo2 = populacao2 + area2 + pib2 + pontos2 + pib_per_capita2;

    int resultadoSuperTrunfo1;
    int resultadosupertrunfo2;
    resultadoSuperTrunfo1 = (supertrunfo1 > supertrunfo2);
    resultadosupertrunfo2 = (supertrunfo2 > supertrunfo1);

    // resultados finais mostrando quanto cada carta pontuou
    printf("\n--- Resultados da Comparação ---\n");

    printf("Super Trunfo - Carta 1: %.2f\n", supertrunfo1);
    printf("Super Trunfo - Carta 2: %.2f\n", supertrunfo2); 

    printf("\n--- Carta 1 (pontos) ---\n");
    printf("populção: %d\n", resultadopoplacao1);
    printf("area: %d\n", resultadoarea1);  
    printf("pib: %d\n", resultadopib1);
    printf("pontos: %d\n", resultadopontos1);
    printf("densidade: %d\n", resultadodensidade1);
    printf("pib per capita: %d\n", resultadopib_per_capita1);
    printf("Super Trunfo: %d\n", resultadoSuperTrunfo1);
    printf(" A carta 1 fez %d pontos na comparação.\n", resultadopoplacao1 + resultadoarea1 + resultadopib1 + resultadopontos1 + resultadodensidade1 + resultadopib_per_capita1 + resultadoSuperTrunfo1);

    printf("\n--- Carta 2 (pontos) ---\n");
    printf("populção: %d\n", resultadopoplacao2); 
    printf("area: %d\n", resultadoarea2);
    printf("pib: %d\n", resultadopib2);
    printf("pontos: %d\n", resultadopontos2);
    printf("densidade: %d\n", resultadodensidade2);
    printf("pib per capita: %d\n", resultadopib_per_capita2);
    printf("Super Trunfo: %d\n", resultadosupertrunfo2);
    printf(" A carta 2 fez %d pontos na comparação.\n", resultadopoplacao2 + resultadoarea2 + resultadopib2 + resultadopontos2 + resultadodensidade2 + resultadopib_per_capita2 + resultadosupertrunfo2);

  

    


    
    
    
    return 0;
}
