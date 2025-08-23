#include <stdio.h>

int main(){
    char estado1 = 'B';
    char estado2 = 'D';
    char codigodacarta1[10] = "B01";
    char codigodacarta2[10] = "D01";
    char nomedacidade1[50] = "SALVADOR";
    char nomedacidade2[50] = "ARACAJU";
    int população1 = 14850513;
    int população2 = 2210004;
    float areaemkm²1 = 564.760;
    float areaemkm²2 = 21.938;
    float pib1 = 138.5;
    float pib2 = 51.861;
    int npturisticos1 = 70;
    int npturisticos2 = 35;
    float densidadepopulacional1 = 26295.26;
    float densidadepopulacional2 = 100738.62;
    float pibpercapita1 = 107;
    float pibpercapita2 = 42;

    printf("*** SUPER TRUFO EM C *** \n");

    printf("Qual é o estado1: ");
    scanf("%c", &estado1);
    printf("O estado1 é: %c\n", estado1);

    printf("Qual é o estado2: ");
    scanf("%c", &estado2);
    printf("O estado2 é: %c\n", estado2);

    printf("Qual o Código da carta 1: ");
    scanf("%s", codigodacarta1);
    printf("O codigo da carta 1 é: %s\n",codigodacarta1);

    printf("Qual o Codigo da carta 2 é: ");
    scanf("%s", codigodacarta2);
    printf("O codigo da carta 2 é: %s\n",codigodacarta2);

    printf("Qual o nome da cidade 1: ");
    scanf("%s", nomedacidade1);
    printf("O nome da cidade é: %s\n", nomedacidade1);

    printf("Qual o nome da cidade 2: ");
    scanf("%s", nomedacidade2);
    printf("O nome da cidade 2: %s\n", nomedacidade2);


    printf("Qual a população 1: ");
    scanf("%d", &população1);
    printf("A população 1 é: %d\n", população1);

    printf("Qual a população 2: ");
    scanf("%d", &população2);
    printf("A população 2 é: %d\n", população2);

    printf("Qual é a área em Km² 1 : ");
    scanf("%f", &areaemkm²1);
    printf("A área em Km² é: %f\n", areaemkm²1);

    printf("Qual é a área em Km² 2: ");
    scanf("%f", &areaemkm²2);
    printf("A área em Km² 2 é: %f\n", areaemkm²2);

    printf("Qual é o PIB 1: ");
    scanf("%f", &pib1);
    printf("O PIB 1 é: %f\n", pib1);

    printf("Qual é o PIB 2: ");
    scanf("%f", &pib2);
    printf("O pib 2 é: %f\n", pib2);

    printf("Qual é o número de pontos turísticos 1: ");
    scanf("%d", &npturisticos1);
    printf("O número de pontos turísticos são: %d\n", npturisticos1);

    printf("Qual é o número de pontos turísticos 2: ");
    scanf("%d", &npturisticos2);
    printf("O número de pontos turísticos 2 são: %d\n", npturisticos2);

    densidadepopulacional1 = (float) (população1/areaemkm²1);

    printf("Qual é a Densidade Populacional 1: \n");
    scanf("%.2f", densidadepopulacional1);
    printf("A densidade populacional1 é: %.2f\n", densidadepopulacional1);

    densidadepopulacional2 = (float) (população2/areaemkm²2);
    printf("Qual é a Densidade Populacional 2: \n");
    scanf("%.2f", densidadepopulacional2);
    printf("A densidade populacional2 é: %.2f\n", densidadepopulacional2);

    pibpercapita1 = (float) (população1/pib1);
    printf("Qual é a PIB per Capita1: \n");
    scanf("%.2f", pibpercapita1);
    printf("A PIB per Capita1 é: %.2f\n", pibpercapita1);

    pibpercapita2 = (float) (população2/pib2);   
    printf("Qual é a PIB per Capita2: \n");
    scanf("%.2f", pibpercapita2);
    printf("A PIB per Capita2 é: %.2f\n", pibpercapita2);

    return 0;

}