#include <stdio.h>

int main (){
    // Carta 1
    char Estado1[3];
    char CodigoCarta1[3]; 
    char Cidade1[20];
    int Populacao1;
    float Area1;
    float Pib1;
    int PontosTuristicos1;

    // Carta 2
    char Estado2[3];
    char CodigoCarta2[3]; 
    char Cidade2[20];
    int Populacao2;
    float Area2;
    float Pib2;
    int PontosTuristicos2;

    // Entrada de dados da Carta 1
    printf("Dados da Carta 1\n");
    printf("Estado: ");
    scanf("%s", Estado1);
    printf("Codigo da carta: ");
    scanf("%s", CodigoCarta1);
    printf("Cidade: ");
    scanf("%s", Cidade1);
    printf("Populacao: ");
    scanf("%d", &Populacao1);
    printf("Area (km²): ");
    scanf("%f", &Area1);
    printf("Pib (bilhoes): ");
    scanf("%f", &Pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &PontosTuristicos1);

    // Entrada de dados da Carta 2
    printf("\nDados da Carta 2\n");
    printf("Estado: ");
    scanf("%s", Estado2);
    printf("Codigo da carta: ");
    scanf("%s", CodigoCarta2);
    printf("Cidade: ");
    scanf("%s", Cidade2);
    printf("Populacao: ");
    scanf("%d", &Populacao2);
    printf("Area (km²): ");
    scanf("%f", &Area2);
    printf("Pib (bilhoes): ");
    scanf("%f", &Pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &PontosTuristicos2);

    // Exibindo os dados
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", CodigoCarta1);
    printf("Cidade: %s\n", Cidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f km²\n", Area1);
    printf("Pib: %.2f bilhoes\n", Pib1);
    printf("Pontos Turisticos: %d\n", PontosTuristicos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo: %s\n", CodigoCarta2);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f km²\n", Area2);
    printf("Pib: %.2f bilhoes\n", Pib2);
    printf("Pontos Turisticos: %d\n", PontosTuristicos2);

    return 0;
}
