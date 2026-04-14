#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //Carta 1
  char estado1; //Estado
  char codigo_carta1[4]; //A01 até H08
  char nome_cidade1[50]; // Nome da Cidade
  int populacao1; //População
  float area1; //km²
  float pib1; //PIB da Cidade
  int numero_pontos_turisticos1; //Número de Pontos Turísticos

  //Carta 2
  char estado2; //Estado
  char codigo_carta2[4]; //A01 até H08
  char nome_cidade2[50];
  int populacao2; //População
  float area2; //km²
  float pib2; //PIB da Cidade
  int numero_pontos_turisticos2; //Número de Pontos Turísticos


  // Área para entrada de dados

  //Carta 1
  printf("Insira os dados da Carta 1\n");
  printf("Estado:");
  scanf("%c", &estado1);
  printf("Código Desejado (A-H):");
  scanf("%s", codigo_carta1);
  printf("Cidade:");
  scanf("%[^\n]", nome_cidade1);
  printf("População:");
  scanf("%d", &populacao1);
  printf("Área:");
  scanf("%f", &area1);
  printf("PIB:");
  scanf("%f", &pib1);
  printf("Pontos Turísticos:");
  scanf("%d", &numero_pontos_turisticos1);

  

  //Carta 2

  printf("Insira os dados da Carta 2\n");
  printf("Estado:");
  scanf("%c", &estado2);
  printf("Código Desejado (A-H):");
  scanf("%s", codigo_carta2);
  printf("Cidade:");
  scanf("%[^\n]", nome_cidade2);
  printf("População:");
  scanf("%d", &populacao2);
  printf("Área:");
  scanf("%f", &area2);
  printf("PIB:");
  scanf("%f", &pib2);
  printf("Pontos Turísticos:");
  scanf("%d", &numero_pontos_turisticos2);

  // Área para exibição dos dados da cidade

  //Carta 1

  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo_carta1);
  printf("Cidade: %s\n", nome_cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bi R$\n", pib1);
  printf("Pontos Turísticos: %d\n", numero_pontos_turisticos1);

  //Carta 2

  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo_carta2);
  printf("Cidade: %s\n", nome_cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bi R$\n", pib2);
  printf("Pontos Turísticos: %d\n", numero_pontos_turisticos2);



return 0;
} 
