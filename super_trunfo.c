#include    <stdio.h>

    int main(){
        char Estado = 'B';
        char CódigoDacarta[5] = "B01";
        char NomeDaCidade[10] = "SALVADOR";
        int População = 14850513;
        float ÁreaEmkm² = 564.760;
        float Pib = 138.5;
        int NúmeroDePontosTurísticos = 70;


        printf("Estado: %c\n",Estado);
        printf("Código Da carta: %c\n",CódigoDacarta);
        printf("Nome Da Cidade: %c\n",NomeDaCidade);
        printf("População: %d\n",População);
        printf("Área Em Km²: %.2f\n",ÁreaEmkm²);
        printf("Pib: %.2f\n",Pib);
        printf("Número De Pontos Turísticos: %d\n",NúmeroDePontosTurísticos);


        scanf("%c", &Estado);
        scanf("%c", &CódigoDacarta);
        scanf("%c", &NomeDaCidade);
        scanf("%d", &População);
        scanf("%.2f", &ÁreaEmkm²);
        scanf("%.2f", &Pib);
        scanf("%d", &NúmeroDePontosTurísticos);

        return 0;

        
    }
