#include <stdio.h>  
    int main(){
        char estado1, estado2;
        char codigo1[20], codigo2[20];
        char cidade1[20], cidade2 [20];
        int pop1, pop2;
        float area1, area2;
        float pib1, pib2; 
        int pont1, pont2;
        //Cadastrando a carta 1
        printf("Carta 1: \n");


        printf("Estado: ");
        scanf("%s", &estado1);

        printf("Codigo da carta: ");
        scanf("%s", &codigo1);

        printf("Nome da cidade: ");
        scanf("%s", &cidade1);

        printf("Populacao: ");
        scanf("%i", &pop1);

        printf("Area em km: ");
        scanf("%f", &area1);

        printf("PIB: ");
        scanf("%f", &pib1);

        printf("Numero de pontos turisticos: ");
        scanf("%i", &pont1);
        //Imprimindo a carta 1
        printf("-------------------------------------\n");
        printf("Carta 1 completa!\n");
        printf("------ CARTA 1 ------\n");
        printf("Estado: %c\n", estado1);
        printf("Codigo da carta: %s\n", codigo1);
        printf("Cidade: %s\n", cidade1);
        printf("Populacao: %i\n", pop1);
        printf("Area: %.2f\n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Numero de Pontos Turisticos: %i\n", pont1);
        printf("--------------------------------\n");
        //Cadastrando a carta 2
        printf("Carta 2: \n");

        printf("Estado: ");
        scanf("%s", &estado2);

        printf("Codigo da carta: ");
        scanf("%s", &codigo2);

        printf("Nome da cidade: ");
        scanf("%s", &cidade2);

        printf("Populacao: ");
        scanf("%i", &pop2);

        printf("Area em km: ");
        scanf("%f", &area2);

        printf("PIB: ");
        scanf("%f", &pib2);

        printf("Numero de pontos turisticos: ");
        scanf("%i", &pont2);
        //Imprimindo a carta 2
        printf("-------------------------------------\n");
        printf("Carta 2 completa!\n");
        printf("------ CARTA 2 ------\n");
        printf("Estado: %c\n", estado2);
        printf("Codigo da carta: %s\n", codigo2);
        printf("Cidade: %s\n", cidade2);
        printf("Populacao: %i\n", pop2);
        printf("Area: %.2f\n", area2);
        printf("PIB: %.2f\n", pib2);
        printf("Numero de Pontos Turisticos: %i\n", pont2);
        printf("--------------------------------\n");




        
        


    }