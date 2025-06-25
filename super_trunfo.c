#include <stdio.h>//adiciona a biblioteca do scanf e od printf.

int main() {
    
    char estado1,estado2;  //variável para o nome dos países.
    char nome_c1[50],nome_c2[50];  //variável para o nome da cidade.
    int pop1,pop2;  //variável para população.
    float area1, area2, PIB1, PIB2;  //variável para a área e para o PIB.
    int P_turistico1,P_turistico2  ;//variável para quantidade de pontos turísticos.
    float super_poder1,super_poder2; //variável para o super poder da carta.

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

    //inicializando as variáveis de densidade populacional e PIB per capital da carta01 e fazendo o calculo para o valor final.
    float D_pop1 = pop1/area1;
    float PIB_p_capita1 = PIB1/pop1;
    //calculo do suoper poder da carta 1.
    super_poder1 = (float) pop1 + area1 + PIB1 + P_turistico1 + 1/D_pop1 + PIB_p_capita1;

    //esta printando as variáveis da carta 01
    printf("\nCarta 01\nEstado: %c\nCodigo: %c01\nNome da Cidade: %s\nPopulacao: %dhabitantes\nArea: %.2f quilometros quadrados\nPIB: R$%.2f\nNumero de Pontos Turisticos: %d\nDensidade Populacional: %.2fhab/quilometros quadrados\nPIB per Capita: R$%.2f\nSuper Poder: %.2f \n"
    , estado1, estado1, nome_c1, pop1, area1, PIB1, P_turistico1, D_pop1, PIB_p_capita1, super_poder1);

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

    //inicializando as variáveis de densidade populacional e PIB per capital da carta01 e fazendo o calculo para o valor final.
    float D_pop2 = pop2/area2;
    float PIB_p_capita2 = PIB2/pop2;
    //calculo do super poder da carta 02.
    super_poder2 = (float) pop2 + area2 + PIB2 + P_turistico2 + 1/D_pop2 + PIB_p_capita2;

    //esta printando as variáveis da carta 02
    printf("\nCarta 02\nEstado: %c\nCodigo: %c02\nNome da Cidade: %s\nPopulacao: %d\nArea: %.2f quilometros quadrados\nPIB: %.2fR$\nNumero de Pontos Turisticos: %d\nDensidade Populacional: %fhab/quilometros quadrados\nPIB per Capita: %.2fR$\nSuper Poder:%.2f\n"
    , estado2, estado2, nome_c2, pop2, area2, PIB2, P_turistico2, D_pop2, PIB_p_capita2, super_poder2);


    //parte de comparação para saber o vencedor:
    int resultado; //inicializando a variável resultado pra armazenar o resultado das comparações das cartas.
    
    //fazendo a comparação dos valores das cartas e apresentando em fortamato de 1 ou 0 se o resultado analisado é verdadeiro ou falso,
    // 1 represnetando verdadeiro e 0 falso.
    resultado = pop1 > pop2;
    printf ("a população da carta 1 e maior que a da 2? %d\n", resultado);

    resultado = area1 > area2;
    printf ("a area da carta 1 e maior que a da 2? %d\n", resultado);

    resultado = PIB1 > PIB2;
    printf ("o PIB da carta 1 e maior que o da 2? %d\n", resultado);

    resultado = P_turistico1 > P_turistico2;
    printf ("a quantidade de pontos turisticos da carta 1 e maior que a da 2? %d\n", resultado);

    resultado = D_pop1 < D_pop2;
    printf ("a densidade populacional da carta 1 e menor que a da 2? %d\n", resultado);

    resultado = PIB_p_capita1 > PIB_p_capita2;
    printf ("a PIB per capta da carta 1 e maior que a da 2? %d\n", resultado);

    resultado = super_poder1 > super_poder2;
    printf ("o super poder da carta 1 e maior que o da 2? %d\n", resultado);

    return 0;
}
