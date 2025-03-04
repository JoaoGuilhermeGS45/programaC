#include <stdio.h>

    int main(){

        //É a minha primeira tentativa, espero que tenha ficado bom -_-

        char Estado;
        char Codigo[5];
        char Nome[20];
        int Populacao;
        float Area;
        float PIB;
        int Numero;

        printf("\nCarta: 01\n");//Carta 01

        printf("Digite a Letra do Estado:\n");
        scanf(" %c", &Estado);

        printf("Digite o Codigo da Carta:\n");
        scanf("%s", Codigo);

        printf("Digite o Nome da Cidade:\n");
        scanf("%s", Nome);

        printf("Digite o Número da População:\n");
        scanf("%d", &Populacao);

        printf("Digite a Área da Cidade:\n");
        scanf("%f", &Area);

        printf("Digite o PIB:\n");
        scanf("%f", &PIB);

        printf("Digite o Número de Pontos Turísticos:\n");
        scanf("%d", &Numero);
        
        printf("\nCarta: 01\n");
        printf("Estado: %c\n",Estado);
        printf("Código: %s\n",Codigo);
        printf("Nome da Cidade: %s\n",Nome);
        printf("População: %d\n",Populacao);
        printf("Área: %.2f km²\n", Area);
        printf("PIB: %.2f bilhões de reais\n", PIB);
        printf("Número de Pontos Turísticos: %d\n", Numero);

        
        printf("\nCarta: 02\n");//Carta 02

        printf("Digite a Letra do Estado:\n");
        scanf(" %c", &Estado);

        printf("Digite o Codigo da Carta:\n");
        scanf("%s", Codigo);

        printf("Digite o Nome da Cidade:\n");
        scanf("%s", Nome);

        printf("Digite o Número da População:\n");
        scanf("%d", &Populacao);

        printf("Digite a Área da Cidade:\n");
        scanf("%f", &Area);

        printf("Digite o PIB:\n");
        scanf("%f", &PIB);

        printf("Digite o Número de Pontos Turísticos:\n");
        scanf("%d", &Numero);

        printf("\nCarta: 02\n");
        printf("Estado: %c\n",Estado);
        printf("Código: %s\n",Codigo);
        printf("Nome da Cidade02: %s\n",Nome);
        printf("População: %d\n",Populacao);
        printf("Área: %.2f km²\n", Area);
        printf("PIB: %.2f bilhões de reais\n", PIB);
        printf("Número de Pontos Turísticos: %d\n", Numero);
        
    }