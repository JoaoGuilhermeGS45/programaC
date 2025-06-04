#include <stdio.h>

    int main(){

        char Estado01, Estado02;
        char Codigo01[5], Codigo02[5];
        char Nome01[20], Nome02[20];
        unsigned long int Populacao01, Populacao02;
        float Area01, Area02;
        float PIB01, PIB02;
        int Numero01, Numero02; 
        
        //Carta 01

        printf("\nCarta: 01\n");

        printf("Digite a Letra do Estado:\n");
        scanf(" %c", &Estado01);

        printf("Digite o Codigo da Carta:\n");
        scanf("%s", Codigo01);

        printf("Digite o Nome da Cidade:\n");
        scanf("%s", Nome01);

        printf("Digite o Número da População:\n");
        scanf("%lu", &Populacao01);

        printf("Digite a Área da Cidade:\n");
        scanf("%f", &Area01);

        printf("Digite o PIB:\n");
        scanf("%f", &PIB01);

        printf("Digite o Número de Pontos Turísticos:\n");
        scanf("%d", &Numero01);

        float Densidade01 = (float)Populacao01 / Area01;
        float PIBporCapital01 = PIB01 / (float)Populacao01;
        float DensidadeInversa01 = Area01 / (float)Populacao01;
        float SuperPoder01 = (float)Populacao01 + Area01 + PIB01 + (float)Numero01 + DensidadeInversa01 + PIBporCapital01;

        printf("\nCarta: 01\n");
        printf("Estado: %c\n",Estado01);
        printf("Código: %s\n",Codigo01);
        printf("Nome da Cidade: %s\n",Nome01);
        printf("População: %lu\n",Populacao01);
        printf("Área: %.2f km²\n", Area01);
        printf("PIB: %.2f bilhões de reais\n", PIB01);
        printf("Número de Pontos Turísticos: %d\n", Numero01);
        printf("A Densidade da População é: %.2f hab/km²\n", Densidade01);
        printf("Inverso da Densidade: %.6f km²/hab\n", DensidadeInversa01);
        printf("O PIB por capital é %.2f reais \n", PIBporCapital01);

        printf("Seu super poder é de: %.2f \n", SuperPoder01);


        //Carta 02

        printf("\nCarta: 02\n");

        printf("Digite a Letra do Estado:\n");
        scanf(" %c", &Estado02);

        printf("Digite o Codigo da Carta:\n");
        scanf("%s", Codigo02);

        printf("Digite o Nome da Cidade:\n");
        scanf("%s", Nome02);

        printf("Digite o Número da População:\n");
        scanf("%lu", &Populacao02);

        printf("Digite a Área da Cidade:\n");
        scanf("%f", &Area02);

        printf("Digite o PIB:\n");
        scanf("%f", &PIB02);

        printf("Digite o Número de Pontos Turísticos:\n");
        scanf("%d", &Numero02);

        float Densidade02 = (float)Populacao02 / Area02;
        float PIBporCapital02 = PIB02 / (float)Populacao02;
        float DensidadeInversa02 = Area02 / (float)Populacao02;
        float SuperPoder02 = (float)Populacao02 + Area02 + PIB02 + (float)Numero02 + DensidadeInversa02 + PIBporCapital02;

        printf("\nCarta: 02\n");
        printf("Estado: %c\n",Estado02);
        printf("Código: %s\n",Codigo02);
        printf("Nome da Cidade: %s\n",Nome02);
        printf("População: %lu\n",Populacao02);
        printf("Área: %.2f km²\n", Area02);
        printf("PIB: %.2f bilhões de reais\n", PIB02);
        printf("Número de Pontos Turísticos: %d\n", Numero02);
        printf("A Densidade da População é: %.2f hab/km²\n", Densidade02);
        printf("Inverso da Densidade: %.6f km²/hab\n", DensidadeInversa02);
        printf("O PIB por capital é %.2f reais \n", PIBporCapital02);

        printf("Seu super poder é de: %.2f \n", SuperPoder02);

     printf("\nComparação de Cartas:\n");

    int resultado = Populacao01 > Populacao02;
    printf("População: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);


    resultado = Area01 > Area02;
    printf("Área: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);


    resultado = PIB01 > PIB02;
    printf("PIB: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);


    resultado = Numero01 > Numero02;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);


    resultado = Densidade01 < Densidade02;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    
    resultado = PIBporCapital01 > PIBporCapital02;
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    
    resultado = SuperPoder01 > SuperPoder02;
    printf("Super Poder: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    

        return 0; 
    }