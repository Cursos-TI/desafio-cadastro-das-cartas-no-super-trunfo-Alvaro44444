#include<stdio.h>//implementação da biblioteca
//Função para os movimentos da torre
void Torre (int blocos){
    if (blocos < 5)
    {
        printf("direita\n");
        blocos++;
        Torre(blocos);
        
    }
}

//Funçao para os movimentos da Rainha
void Rainha (int casas){
    if (casas < 8)
    {
        printf("Esquerda\n");
        casas++;
        Rainha(casas);
        
    }
}

//Fução para os movimentos do Bispo
void Bispo (int horizontal,int vertical)  {
    printf("\nBispo\n");
    for (vertical = 0; vertical < 5; vertical++)
    {
        printf("cima\n");
        for (horizontal = 0; horizontal < 1; horizontal++)
        { 
            printf("direita\n");
        }
        
        
    }
    
}

int main()
{
    int i,c;//variáveis para usar nas funções e nos loops
    i=0;
    c=0;
    
    //chamando a função da torre para printar os movimentos
    printf("Torre\n");
    Torre(i);

    //chamando a função da rainha para printar os movimentos
    printf("\nRainha\n");
    Rainha(c);

    i=0;
    c=0;
    //loop aninhado para mostrar os movimentos do cavalo
    Bispo(i,c);
    printf("\nCavalo\n");
    for ( i = 0; i < 2; i++)
    {
        printf("Cima\n");
        if (i == 0)continue;
        printf("Direita\n");
        
    }
    
return 0;
}
