#include <stdio.h>

int main (){
    // Carta 1
    char Estado1[] = "Pernambuco";
    char CodigoCarta1[] = "R01"; // Estado A, cidade 01
    char Cidade1[] = "Recife";
    int Populacao1 = 1653461;
    float Area1 = 218.50;
    float Pib1 = 88.9;
    int PontosTuristicos1 = 10;
    float DensidadePopulacional1;
    float PibPerCapita1;

    // Carta 2
    char Estado2[] = "Paraiba";
    char CodigoCarta2[] = "J01"; // Estado B, cidade 01
    char Cidade2[] = "Joao Pessoa";
    int Populacao2 = 833932;
    float Area2 = 211.50;
    float Pib2 = 22.5;
    int PontosTuristicos2 = 8;
    float DensidadePopulacional2;
    float PibPerCapita2;

    // Exibição das Cartas
    printf("Dados da Carta 1 \n");
    printf("Estado: %s \n", Estado1);
    printf("Codigo da carta: %s \n", CodigoCarta1);
    printf("Cidade: %s \n", Cidade1);
    printf("Populacao: %d \n", Populacao1);
    printf("Area: %.2f km² \n", Area1);
    printf("Pib: %.2f bilhões \n", Pib1);
    printf("Pontos Turisticos: %d \n", PontosTuristicos1);
    DensidadePopulacional1 = (float)(Populacao1 / Area1);
    printf("Densidade Populacional: %.2f \n", DensidadePopulacional1);
    PibPerCapita1 = (float)(Pib1 / Populacao1);
    printf("Pib per capita: %.2f \n\n", PibPerCapita1);

    // Exibição da Carta 2
    printf("Dados da Carta 2 \n");
    printf("Estado: %s \n", Estado2);
    printf("Codigo da carta: %s \n", CodigoCarta2);
    printf("Cidade: %s \n", Cidade2);
    printf("Populacao: %d \n", Populacao2);
    printf("Area: %.2f km² \n", Area2);
    printf("Pib: %.2f bilhões \n", Pib2);
    printf("Pontos Turisticos: %d \n", PontosTuristicos2);
    DensidadePopulacional2 = (float)(Populacao2 / Area2);
    printf("Densidade Populacional: %.2f \n", DensidadePopulacional2);
    PibPerCapita2 = (float)(Pib2/Populacao2);
    printf("Pib per capita: %.2f \n", PibPerCapita2);


    return 0;
}
