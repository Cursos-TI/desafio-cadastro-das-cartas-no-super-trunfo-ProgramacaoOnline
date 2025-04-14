#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.


    char estado[50]; //Uma letra de 'A' a 'H' (representando um dos oito estados). %s = string
    char codigo[50]; //A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). %s = string
    char cidade[50]; //O nome da cidade.  %s = string
    int populacao;   //O número de habitantes da cidade.  %d = decimal/inteiro
    float area;      //A área da cidade em quilômetros quadrados.  %f = para numeros com virgula
    float pib;       //O Produto Interno Bruto da cidade.  %f = para numeros com virgula
    int npturistico; //A quantidade de pontos turísticos na cidade. %d = decimal/inteiro

    char estado2[50];
    char codigo2[50];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int npturistico2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
     //Entrada carta 1

     printf("Carta 1\n");
     printf("Digite o Estado: \n");
     scanf("%s", &estado);
 
     printf("Digite o Código da Carta: \n");
     scanf("%s", &codigo);
 
     printf("Digite o Nome da Cidade: \n");
     scanf("%s", &cidade);
 
     printf("Digite o Número de Habitantes da Cidade: \n");
     scanf("%d", &populacao);
 
     printf("Digite a Área (em km²): \n");
     scanf("%f", &area);
     
     printf("Digite o PIB da cidade: \n");
     scanf("%f", &pib);
     
     printf("Digite a quantidade de Pontos Turísticos na Cidade: \n");
     scanf("%d", &npturistico);
 
     // Entrada carta 2
 
     printf("Carta 2\n");
     printf("Digite o Estado: \n");
     scanf("%s", &estado2);
 
     printf("Digite o Código da Carta: \n");
     scanf("%s", &codigo2);
 
     printf("Digite o Nome da Cidade: \n");
     scanf("%s", &cidade2);
 
     printf("Digite o Número de Habitantes da Cidade: \n");
     scanf("%d", &populacao2);
 
     printf("Digite a Área (em km²): \n");
     scanf("%f", &area2);
     
     printf("Digite o PIB da cidade: \n");
     scanf("%f", &pib2);
     
     printf("Digite a quantidade de Pontos Turísticos na Cidade: \n");
     scanf("%d", &npturistico2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$%.2f\n", pib);
    printf("Quantidade de Pontos Turísticos: %d\n", npturistico);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Quantidade de Pontos Turísticos: %d\n", npturistico2);
    return 0;
}
