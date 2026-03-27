#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
       char estado [50];
    char codigo_carta [50];
    char nome_cidade [50];
    signed long int populacao;
    int pontos_turisticos;
    float km2;
    float pib;
    
    char estado2 [50];
    char codigo_carta2 [50];
    char nome_cidade2 [50];
    signed long int populacao2;
    int pontos_turisticos2;
    float km²2;
    float pib2;
    
    printf("* Super Trunfo Paises *\n");

    printf("Digite o estado para a primeira carta: ");
    scanf(" %c", &estado);

    printf("Digite o codigo da primeira carta: ");
    scanf(" %s", &codigo_carta);

    printf("Digite o nome da primeira cidade: "); // não use acentos ou espaços.
    scanf("%s", &nome_cidade);

    printf("Digite o numero de habitantes desta primeira cidade: ");
    scanf("%d", &populacao);

    printf("Quantos km2 tem esta primeira cidade: ");
    scanf("%f", &km2);

    printf("Qual o PIB da primeira cidade: ");
    scanf("%f", &pib);

    printf("Quantos pontos turisticos tem a primeira cidade: \n");
    scanf("%d", &pontos_turisticos);

    float densidade = (float) populacao / km2;
    float capita = (float) populacao / pib;

    printf("Digite o estado para a segunda carta: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da segunda carta: "); // não use acentos ou espaços.
    scanf(" %s", &codigo_carta2);

    printf("Digite o nome da segunda cidade: ");
    scanf("%s", &nome_cidade2);

    printf("Digite o numero de habitantes desta segunda cidade: ");
    scanf("%d", &populacao2);

    printf("Quantos km2 tem esta segunda cidade: ");
    scanf("%f", &km²2);

    printf("Qual o PIB da segunda cidade: ");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos tem a segunda cidade: \n");
    scanf("%d", &pontos_turisticos2);

    
    float densidade2 = (float) populacao2 / km²2;
    float capita2 = (float) populacao2 / pib2;

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2fkm²\n", km2);
    printf("Pib: %.2f Bilhões de Reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("Pib per Capita: %.2f\n", capita);

    printf("\n*********\n");

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", km²2);
    printf("Pib: %.2f Bilhões de Reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("Pib per Capita: %.2f\n", capita2);

    printf("\n*********\n");
    
    // Tirei a variavel "Super poder", pois não foi pedido.
    // Farei a comparação de todos como o professor indicou, mas como escolha eu peguei o PIB
     printf("\nComparação das cartas: Atributo: PIB: \n%s R$ %.2f Bilhões de reais \n%s R$ %.2f Bilhões de reais",
             nome_cidade, pib, nome_cidade2, pib2);

    if (pib > pib2){
        printf("\nResultado: A Carta 1 (%s) venceu!! \n", nome_cidade); 
    }else{
        printf("\nResultado: A Carta 2 (%s) venceu!! \n", nome_cidade2); 

    }

    return 0;
}