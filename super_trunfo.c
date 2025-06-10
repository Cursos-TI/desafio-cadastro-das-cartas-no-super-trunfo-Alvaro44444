#include <stdio.h>//adiciona a biblioteca do scanf e od printf
int main() {
    
    char estado1,estado2;  //variável para o nome dos países.
    char nome_c1[50],nome_c2[50];  //variável para o nome da cidade.
    int pop1,pop2;  //variável para população.
    float area1, area2, PIB1, PIB2;  //variável para a área e para o PIB.
    int P_turistico1,P_turistico2  ;//variável para quantidade de pontos turísticos.

    //implementação do usuário para a carta01
    printf("digite a letra do estado da carta 01: ");
    scanf("%c", &estado1);
    printf("digite o nome da cidade: ");
    scanf(" %s", &nome_c1);
    printf("digite a populacao da cidade: ");
    scanf(" %d", &pop1);
    printf("digite a area geografica da cidade: ");
    scanf(" %f", &area1);
    printf("digite o produto interno bruto da cidade: ");
    scanf(" %f", &PIB1);
    printf("digite a quantidade de pontos turisticos da cidade: ");
    scanf(" %d", &P_turistico1);

    //esta printando as variáveis da carta 01
    printf("\nCarta 01\nEstado: %c\nCodigo: %c01\nNome da Cidade: %s\nPopulacao: %d\nArea: %.2f quilometros quadrados\nPIB: %.2fR$\nNumero de Pontos Turisticos: %d\n"
    , estado1, estado1, nome_c1, pop1, area1, PIB1, P_turistico1);


    //implementação do usuário para a carta 02
    printf("digite a letra do estado da carta 02: ");
    scanf(" %c", &estado2);
    printf("digite o nome da cidade: ");
    scanf(" %s", &nome_c2);
    printf("digite a populacao da cidade: ");
    scanf(" %d", &pop2);
    printf("digite a area geografica da cidade: ");
    scanf(" %f", &area2);
    printf("digite o produto interno bruto da cidade: ");
    scanf(" %f", &PIB2);
    printf("digite a quantidade de pontos turisticos da cidade: ");
    scanf(" %d", &P_turistico2);

    //esta printando as variáveis da carta 02
    printf("\nCarta 02\nEstado: %c\nCodigo: %c02\nNome da Cidade: %s\nPopulacao: %d\nArea: %.2f quilometros quadrados\nPIB: %.2fR$\nNumero de Pontos Turisticos: %d"
    , estado2, estado2, nome_c2, pop2, area2, PIB2, P_turistico2);
    return 0;
}
