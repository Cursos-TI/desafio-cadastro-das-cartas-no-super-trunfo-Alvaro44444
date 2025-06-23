#include <stdio.h>

int main() {
    //fazendo as variaveis das cartas
    char estado1, estado2;
    char nome_c1[50], nome_c2[50];
    int pop1, pop2;
    float area1, area2, PIB1, PIB2;
    int P_turistico1, P_turistico2;
    float super_poder1, super_poder2;

    // Entrada da carta 01
    printf("Digite a letra do estado da carta 01: ");
    scanf(" %c", &estado1);
    printf("Digite o nome da cidade: ");
    scanf(" %s", nome_c1);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &pop1);
    printf("Digite a area geografica da cidade: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &P_turistico1);

    //calcucolo da densidade demografica e do PIB per capta
    float D_pop1 = pop1 / area1;
    float PIB_p_capita1 = PIB1 / pop1;

    //calculo do super poder
    super_poder1 = pop1 + area1 + PIB1 + P_turistico1 + D_pop1 + PIB_p_capita1;

    //print de todos os valores da carta 01
    printf("\n=== Carta 01 - %s (%c) ===\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\nPontos Turisticos: %d\nDensidade: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n",
           nome_c1, estado1, pop1, area1, PIB1, P_turistico1, D_pop1, PIB_p_capita1, super_poder1);

    // Entrada da carta 02
    printf("\nDigite a letra do estado da carta 02: ");
    scanf(" %c", &estado2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", nome_c2);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &pop2);
    printf("Digite a area geografica da cidade: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &P_turistico2);

    //calculo da densidade populacional e do PIB per capta da carta 02
    float D_pop2 = pop2 / area2;
    float PIB_p_capita2 = PIB2 / pop2;

    //calculo do super poder da carta 02
    super_poder2 = pop2 + area2 + PIB2 + P_turistico2 + D_pop2 + PIB_p_capita2;

    // print da carta 02
    printf("\n=== Carta 02 - %s (%c) ===\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\nPontos Turisticos: %d\nDensidade: %.2f\nPIB per Capita: %.2f\nSuper Poder: %.2f\n",
           nome_c2, estado2, pop2, area2, PIB2, P_turistico2, D_pop2, PIB_p_capita2, super_poder2);

    // valores que vão ser comparados pelo usuario
    const char* valores_nome[7] = {
        "Populacao", "Area", "PIB", "Pontos Turisticos", "Densidade", "PIB per Capita", "Super Poder"
    };

    float valores_carta1[7] = {pop1, area1, PIB1, P_turistico1, D_pop1, PIB_p_capita1, super_poder1};
    float valores_carta2[7] = {pop2, area2, PIB2, P_turistico2, D_pop2, PIB_p_capita2, super_poder2};

    // variavei pra escolha dos valores
    int escolha1, escolha2;
    float valor1card1, valor1card2, valor2card1, valor2card2;
    char *resultado1, *resultado2, *resultadoSoma;

    // Primeira escolha
    printf("\nEscolha o primeiro valor para comparar:\n");
    for (int i = 0; i < 7; i++) {
        printf("%d - %s\n", i + 1, valores_nome[i]);
    }
    scanf("%d", &escolha1);
    while (escolha1 < 1 || escolha1 > 7) {
        printf("Escolha invalida. Digite um valor entre 1 e 7: ");
        scanf("%d", &escolha1);
    }

    // Segunda escolha e comparação para não ser igual a primeira
    printf("\nEscolha o segundo valore para comparar (diferente de %d - %s):\n", escolha1, valores_nome[escolha1 - 1]);
    for (int i = 0; i < 7; i++) {
        if (i != (escolha1 - 1)) {
            printf("%d - %s\n", i + 1, valores_nome[i]);
        }
    }
    scanf("%d", &escolha2);
    while (escolha2 < 1 || escolha2 > 7 || escolha2 == escolha1) {
        printf("Escolha invalida. Digite um valor entre 1 e 7, diferente de %d: ", escolha1);
        scanf("%d", &escolha2);
    }

    // Comparação da primeira escolha
    if ( (valores_carta1[escolha1 - 1] == valores_carta2[escolha1 - 1]))
    {
        resultado1 = "Empate(os valores são iguais).";
    }
    else if (escolha1 == 5) {
        resultado1 = (D_pop1 < D_pop2) ? "Carta 01 venceu" : "Carta 02 venceu";
    } else {
        resultado1 = (valores_carta1[escolha1 - 1] > valores_carta2[escolha1 - 1]) ? "Carta 01 venceu" : "Carta 02 venceu";
    }
    valor1card1 = valores_carta1[escolha1 - 1];
    valor1card2 = valores_carta2[escolha1 - 1];

    // Comparação da segunda escolha
    if (escolha2 == 5) {
        resultado2 = (D_pop1 < D_pop2) ? "Carta 01 venceu" : "Carta 02 venceu";
    } else {
        resultado2 = (valores_carta1[escolha2 - 1] > valores_carta2[escolha2 - 1]) ? "Carta 01 venceu" : "Carta 02 venceu";
    }
    valor2card1 = valores_carta1[escolha2 - 1];
    valor2card2 = valores_carta2[escolha2 - 1];

    // Comparação da soma
    float soma1 = valor1card1 + valor2card1;
    float soma2 = valor1card2 + valor2card2;
    resultadoSoma = (soma1 > soma2) ? "Carta 01 venceu na soma" : "Carta 02 venceu na soma";

    // Impressão dos resultados
    printf("\n=== RESULTADOS ===\n");
    printf("Na comparacao da cidadade de %s com a cidade de %s;\nCom os valores de %.2f na primeira cidade e %.2f na segunda cidade, coparando o valor %s: A %s\n"
        ,nome_c1, nome_c2,valores_carta1[escolha1 - 1], valores_carta2[escolha1 - 1], valores_nome[escolha1 - 1], resultado1);
    printf("Na comparacao da cidadade de %s com a cidade de %s;\nCom os valores de %.2f na primeira cidade e %.2f na segunda cidade, comparando o valor %s: A %s\n"
        ,nome_c1, nome_c2, valores_carta1[escolha2 - 1], valores_carta2[escolha2 - 1], valores_nome[escolha2 - 1], resultado2);
    printf("Na comparacao do valor da primeira soma (%.2f) e o da segunda soma (%.2f): A %s\n",soma1,soma2, resultadoSoma);

    return 0;
}
