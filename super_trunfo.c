#include <stdio.h>

int main() {
    
    char estado1,estado2;  //variável para o nome dos países.
    char cod1[3],cod2[3];  //variável para o codigo da carta.
    char nome_c1[50],nome_c2[50];  //variável para o nome da cidade.
    int pop1,pop2;  //variável para população.
    float area1, area2, PIB1, PIB2;  //variável para a área e para o PIB.
    int P_turistico1,P_turistico2  ;//variável para quantidade de pontos turísticos.

    //implementação do usuário para a carta01
    printf("digite a sigla do estado da carta: ");
    scanf("%c", &estado1);
    printf("digite o codigo da carta: ");
    scanf(" %s", &cod1);
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
    printf("\nCarta 01\nEstado: %c\nCodigo: %s\nNome da Cidade: %s\nPopulacao: %d\nArea: %.2f quilometros quadrados\nPIB: %.2fR$\nNumero de Pontos Turisticos: %d\n"
    , estado1, cod1, nome_c1, pop1, area1, PIB1, P_turistico1);


    //implementação do usuário para a carta 02
    printf("digite a sigla do estado da carta: ");
    scanf(" %c", &estado2);
    printf("digite o codigo da carta: ");
    scanf(" %s", &cod2);
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
    printf("\nCarta 02\nEstado: %c\nCodigo: %s\nNome da Cidade: %s\nPopulacao: %d\nArea: %.2f quilometros quadrados\nPIB: %.2fR$\nNumero de Pontos Turisticos: %d"
    , estado2, cod2, nome_c2, pop2, area2, PIB2, P_turistico2);
    return 0;
}
