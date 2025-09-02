#include <stdio.h>

    int main (){

        char estado1 = 'B';
        char estado2 = 'H';
        char codigodacarta1[20] = "B01";
        char codigodacarta2[20] = "H02";
        char cidade1[20] = "BAHIA";
        char cidade2[20] = "SERGIPE";
        unsigned int populacao1 = 14580513;
        unsigned int populacao2 = 2210004;
        float area1 = 564760;
        float area2 = 21938;
        float pib1 = 138560000;
        float pib2 = 51860000;
        int npturisticos1 = 70;
        int npturisticos2 = 35;
        float densidade1;
        float densidade2;
        float perCapita1;
        float perCapita2;
        float superPoder1;
        float superPoder2;

        printf("***Super Trufo***\n");

        printf("Qual é o estado 1? \n");
        scanf("%c", &estado1);
        
        printf("Qual é o estado 2? \n");
        scanf("%c", &estado2);
    
        printf("Qual é o código da carta 1? \n");
        scanf("%s", codigodacarta1);
        
        printf("Qual é o código da carta 2? \n");
        scanf("%s", codigodacarta2);
        
        printf("Qual é a cicade 1? \n");
        scanf("%s", cidade1);
        
        printf("Qual é a cicade 2? \n");
        scanf("%s", cidade2);

        printf("Qual é a população1? \n");
        scanf("%u", &populacao1);
        
        printf("Qual é a População 2? \n");
        scanf("%u", &populacao2);
        
        printf("A área em km² carta 1 é? \n");
        scanf("%f", &area1);
        
        printf("A área em km² carta 2 é? \n");
        scanf("%f", &area2);
        
        printf("Qual o pib1? \n");
        scanf("%f", &pib1);

        printf("Qual é o pib2? \n");
        scanf("%f", &pib2);

        printf("O numero de pontos turísticos 1 é? \n");
        scanf("%d", &npturisticos1);
        
        printf("O numero de pontos turisticos 2 é? \n");
        scanf("%d", &npturisticos2);
        
        densidade1 = (populacao1 / area1);
        densidade2 = (populacao2 / area2);
        perCapita1 = (pib1 / populacao1);
        perCapita2 = (pib2 / populacao2);

        printf("A Densidade populacional 1 é: %.2f\n", densidade1);
        printf("A Densidade Populacional 2 é: %.2f\n", densidade2);
        printf("O Pib per Capita carta 1 é: %.2f\n", perCapita1);
        printf("O Pib per Capita carta 2 é: %.2f\n", perCapita2);

        superPoder1 = (populacao1 + area1 + pib1 + perCapita1 + (1 / densidade1) + npturisticos1) / 6;
        superPoder2 = (populacao2 + area2 + pib2 + perCapita2 + (1 / densidade2) + npturisticos2) / 6;

        printf("O super poder carta 1 é: %.2f\n", superPoder1);
        printf("O super poder carta 2 é: %.2f\n", superPoder2);

       int resultadopop = (populacao1 > populacao2);
       int resultadoarea = (area1 > area2);
       int resultadopib = (pib1 > pib2);
       int resultadoperCap = (perCapita1 > perCapita2);
       int resultadodens = (densidade1 < densidade2);
       int resultadoNPT = (npturisticos1 > npturisticos2);
       int resultadoSP = (superPoder1 > superPoder2);


        printf("População 1 é maior que População 2? %d\n", resultadopop);
        printf("Área 1 é maior que área 2? %d\n", resultadoarea);
        printf("Pib 1 é maior que pib 2? %d\n", resultadopib);
        printf("O pib per Capita 1 é maior que o pib per Capita 2? %d\n", resultadoperCap);
        printf("A densidade 1 é maior que densidade 2? %d\n", resultadodens);
        printf("O número de pontos turísticos 1 é maior que o número de pontos turisticos 2: %d\n", resultadoNPT);
        printf("O super poder 1 é maior que o super poder 2? %d\n", resultadoSP);


        return 0;

    }
