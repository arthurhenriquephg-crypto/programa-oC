#include <stdio.h>  
    int main(){
        char estado1[3], estado2[3];
        char codigo1[20], codigo2[20];
        char cidade1[20], cidade2 [20];
        int pop1, pop2;
        float area1, area2;
        float pib1, pib2; 
        int pont1, pont2;
        //Cadastrando a carta 1
        printf("Carta 1: \n");


        printf("Estado: ");
        scanf("%2s", estado1);

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

        printf("Estado: %s\n", estado1);

        printf("Codigo da carta: %s\n", codigo1);

        printf("Cidade: %s\n", cidade1);

        printf("Populacao: %i\n", pop1);

        printf("Area: %.2f km²\n", area1);

        printf("PIB: %.2f\n", pib1);

        printf("Numero de Pontos Turisticos: %i\n", pont1);

        float densidade = (float) pop1 / area1;

        printf("Densidade populacional: %.2f hab/km²\n", densidade);

        float pibpercapita1 =  pib1 / (float) pop1;

        printf("PIB per Capita: %.2f reais\n", pibpercapita1);

        float superpoder1 = (pop1 + (int)area1 + (int)pib1 + pont1 + (int)pibpercapita1);

        printf("Super Poder: %.2f\n", superpoder1);

        printf("--------------------------------\n");
        //Cadastrando a carta 2
        printf("Carta 2: \n");

        printf("Estado: ");
        scanf("%2s", estado2);

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

        printf("Estado: %s\n", estado2);

        printf("Codigo da carta: %s\n", codigo2);

        printf("Cidade: %s\n", cidade2);

        printf("Populacao: %i\n", pop2);

        printf("Area: %.2f\n", area2);

        printf("PIB: %.2f\n", pib2);

        printf("Numero de Pontos Turisticos: %i\n", pont2);

        float densidade2 = (float) pop2 / area2;

        printf("Densidade populacional: %.2f hab/km²\n", densidade2);

        float pibpercapita2 =  pib2 / (float) pop2;

        printf("PIB per Capita: %.2f reais\n", pibpercapita2);

        float superpoder2 = (pop2 + (int)area2 + (int)pib2 + pont2 + (int)pibpercapita2);

        printf("Super Poder: %.2f\n", superpoder2);

        printf("--------------------------------\n");

        printf("--- RESULTADO ---\n");
        
        float resultadopop = pop1 > pop2;
        
        printf("A populacao da carta 1 (%i) eh maior do que a populacao da carta 2(%i)? %.0f\n", pop1, pop2, resultadopop);

        float resultadoarea = area1 > area2;

        printf("A area da carta 1(%.2f) eh maior do que a carta 2(%.2f)? %.0f\n", area1, area2, resultadoarea);

        float resultadopib = pib1 > pib2;

        printf("O PIB da carta 1 (%.2f) eh maior do que a carta2(%.2f)? %.0f\n", pib1, pib2, resultadopib);

        float resultadoturistico = pont1 > pont2;

        printf("Carta 1(%i) tem mais pontos turisticos do que a carta 2(%i)? %.0f\n", pont1, pont2, resultadoturistico);

        float resultadodensidade = densidade < densidade2;

        printf("Densidade da carta 1(%.2f) eh maior do que a carta 2(%.2f)? %.0f\n", densidade, densidade2, resultadodensidade);

        float resultadopibcapita = pibpercapita1 > pibpercapita2;

        printf("PIB per capita da carta 1(%.2f) eh maior do que o PIB per capita da carta 2(%.2f)? %.0f\n", pibpercapita1, pibpercapita2, resultadopibcapita);

        float resultadosupoerpoder = superpoder1 > superpoder2;

        printf("O super poder da carta 1(%.2f) eh maior do que a carta 2(%.2f)? %.0f\n", superpoder1, superpoder2, resultadosupoerpoder);







        
        


    }