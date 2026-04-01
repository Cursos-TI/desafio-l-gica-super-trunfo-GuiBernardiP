#include <stdio.h>

int main(){

    char estado [50];
    char codigo_carta [50];
    char nome_cidade [50];
    signed long int populacao;
    int pontos_turisticos;
    int escolhaJogador;
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

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2fkm²\n", km2);
    printf("Pib: %.2f Bilhões de Reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("Pib per Capita: %.2f\n", capita);

    printf("\n*****\n");

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", km²2);
    printf("Pib: %.2f Bilhões de Reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("Pib per Capita: %.2f\n", capita2);

    printf("\n*****\n");

    printf("\n###Comparação das Cartas###\n");
    printf("Escolha um dos atributos para ser comparado!:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Pib\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Pib per Capita\n");    
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    switch (escolhaJogador)
    {
    case 1:
        if (populacao > populacao2){
            printf("\nOs Paises %s e %s, estão competindo!\n", nome_cidade, nome_cidade2);
            printf("O Atributo escolhido foi a População\n");
            printf("Valores dos Atributos Carta 1: %d, Carta 2: %d\n", populacao, populacao2);
            printf("Carta 1 Venceu!");
        }else{
            printf("\nOs Paises %s e %s, estão competindo!\n", nome_cidade, nome_cidade2);
            printf("O Atributo escolhido foi a População\n");
            printf("Valores dos Atributos Carta 1: %d, Carta 2: %d\n", populacao, populacao2);
            printf("Carta 2 venceu!");
        }
        break;
    case 2:
        if (km2 > km²2){
            printf("\nOs Paises %s e %s, estão competindo!\n", nome_cidade, nome_cidade2);
            printf("O Atributo escolhido foi a Área\n");
            printf("Valores dos Atributos Carta 1: %.2f, Carta 2: %.2f\n", km2, km²2);
            printf("Carta 1 Venceu!");
        }else{
            printf("\nOs Paises %s e %s, estão competindo!\n", nome_cidade, nome_cidade2);
            printf("O Atributo escolhido foi a Área\n");
            printf("Valores dos Atributos Carta 1: %.2f, Carta 2: %.2f\n", km2, km²2);
            printf("Carta 2 venceu!");
        }
        break;
    case 3:
        if (pib > pib2){
            printf("\nOs Paises %s e %s, estão competindo!\n", nome_cidade, nome_cidade2);
            printf("O Atributo escolhido foi o PIB\n");
            printf("Valores dos Atributos Carta 1: %.2f, Carta 2: %.2f\n", pib, pib2);
            printf("Carta 1 Venceu!");
        }else{
            printf("\nOs Paises %s e %s, estão competindo!\n", nome_cidade, nome_cidade2);
            printf("O Atributo escolhido foi o PIB\n");
            printf("Valores dos Atributos Carta 1: %.2f, Carta 2: %.2f\n", pib, pib2);
            printf("Carta 2 venceu!");
        }
        break;
    case 4:
        if (pontos_turisticos > pontos_turisticos2){
            printf("\nOs Paises %s e %s, estão competindo!\n", nome_cidade, nome_cidade2);
            printf("O Atributo escolhido foi os Pontos Turisticos\n");
            printf("Valores dos Atributos Carta 1: %d, Carta 2: %d\n", pontos_turisticos, pontos_turisticos2);
            printf("Carta 1 Venceu!");
        }else{
            printf("\nOs Paises %s e %s, estão competindo!\n", nome_cidade, nome_cidade2);
            printf("O Atributo escolhido foi os Pontos Turisticos\n");
            printf("Valores dos Atributos Carta 1: %d, Carta 2: %d\n", pontos_turisticos, pontos_turisticos2);
            printf("Carta 2 venceu!");
        }
        break;
    case 5:
        if (densidade < densidade2){
            printf("\nOs Paises %s e %s, estão competindo!\n", nome_cidade, nome_cidade2);
            printf("O Atributo escolhido foi a Densidade Populacional\n");
            printf("Valores dos Atributos Carta 1: %.2f, Carta 2: %.2f\n", densidade, densidade2);
            printf("Carta 1 Venceu!");
        }else{
             printf("\nOs Paises %s e %s, estão competindo!\n", nome_cidade, nome_cidade2);
            printf("O Atributo escolhido foi a Densidade Populacional\n");
            printf("Valores dos Atributos Carta 1: %.2f, Carta 2: %.2f\n", densidade, densidade2);
            printf("Carta 2 venceu!");
        }
        break;
    case 6:
        if (capita > capita2){
            printf("\nOs Paises %s e %s, estão competindo!\n", nome_cidade, nome_cidade2);
            printf("O Atributo escolhido foi o Pib per Capita\n");
            printf("Valores dos Atributos Carta 1: %.2f, Carta 2: %.2f\n", capita, capita2);
            printf("Carta 1 Venceu!");
        }else{
            printf("\nOs Paises %s e %s, estão competindo!\n", nome_cidade, nome_cidade2);
            printf("O Atributo escolhido foi o Pib per Capita\n");
            printf("Valores dos Atributos Carta 1: %.2f, Carta 2: %.2f\n", capita, capita2);
            printf("Carta 2 venceu!");
        }
        break;
    

    default:
        printf("### As cartas empataram! ###");
        break;
    
    }

    return 0;
}