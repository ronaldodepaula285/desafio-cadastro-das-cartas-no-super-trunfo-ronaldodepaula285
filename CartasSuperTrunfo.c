#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

   
  // Área para entrada de dados
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
    printf("Digite os pontos da cidade (0 a 100): ");
    scanf(" %d", &pontos1);

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



  // Área para exibição dos dados da cidade

    printf("\n--- Cartas Cadastradas ---\n");
    printf("Carta: 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib1);
    printf("Pontos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", populacao1 / area1);
    printf("PIB per capita: R$ %.2f\n", (pib1 * 1e9) / populacao1); // Convertendo PIB para reais

    printf("\nCarta: 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões de rais\n", pib2);
    printf("Pontos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", populacao2 / area2);
    printf("PIB per capita: R$ %.2f\n", (pib2 * 1e9) / populacao2); // Convertendo PIB para reais

    printf("\n--- Resultados da Comparação ---\n");

return 0;
}
