#include <stdio.h>

int main() {
  // Variáveis Carta 1
char estado1, codigo1[50], cidade1[50];
int populacao1, pontos1;
float area1, pib1;

// Variáveis Carta 2 
char estado2, codigo2[50], cidade2[50];
int populacao2, pontos2;
float area2, pib2;


  // Leitura da Carta 1

printf("Carta 1:\n");

  printf("Digite o estado (A-H): ");
scanf("%c", &estado1);

printf("Digite o código da carta (ex: A01): ");
scanf("%s", codigo1);

printf("Digite o nome da cidade: ");
scanf("%s", cidade1);

printf("Digite o número de habitantes (sem pontos): ");
scanf(" %d", &populacao1);

printf("Digite a área em km²: ");
scanf("%f", &area1);

printf("Digite o PIB em bilhões: ");
scanf("%f", &pib1);

printf("Digite a quantidade de pontos turísticos: ");
scanf("%d", &pontos1);


 // Leitura da Carta 2

printf("Carta 2:\n");

  printf("Digite o estado (A-H): ");
scanf(" %c", &estado2);

printf("Digite o código da carta (ex: A01): ");
scanf("%s", codigo2);

printf("Digite o nome da cidade: ");
scanf("%s", cidade2);

printf("Digite o número de habitantes (sem pontos): ");
scanf(" %d", &populacao2);

printf("Digite a área em km²: ");
scanf("%f", &area2);

printf("Digite o PIB em bilhões: ");
scanf("%f", &pib2);

printf("Digite a quantidade de pontos turísticos: ");
scanf("%d", &pontos2);

  // Exibição Carta 01

  printf("Carta 1:\n");
  printf("Estado: %c \n", estado1);
  printf("Código: %s \n", codigo1);
  printf("Nome da Cidade: %s \n", cidade1);
  printf("População: %d \n", populacao1);
  printf("Área: %.2f km² \n", area1);
  printf("PIB: %.2f bilhões de reais \n", pib1);
  printf("Número de Pontos Turísticos: %d \n", pontos1);


  // Exibição Carta 02

  printf("Carta 2:\n");
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigo2);
  printf("Nome da Cidade: %s \n", cidade2);
  printf("População: %d \n", populacao2);
  printf("Área: %.2f km² \n", area2);
  printf("PIB: %2.f bilhões de reais \n", pib2);
  printf("Número de Pontos Turísticos: %d \n", pontos2);


return 0;
} 
