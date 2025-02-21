#include <stdio.h>

#define TOTAL_CARTAS 2  


typedef struct {
    int idade;                                       
    int populacao; 
    int pontos;                                                                     
    float area;                                   
    double pib;                  
    char estado;                                     
    char codigo[4];                                
    char cidade[12]; 
} Carta;

int main() {
    Carta cartas[TOTAL_CARTAS];  
    int i;  

    printf("---------------------------------------------\n");
    printf("-      Bem Vindo ao Jogo Super Trunfo       -\n");
    printf("---------------------------------------------\n");

    
    for (i = 0; i < TOTAL_CARTAS; i++) {
        printf("\nDigite os dados da %dª carta:\n", i + 1);
        printf("---------------------------------------------\n");

        printf("Digite um número: ");
        scanf("%d", &cartas[i].idade);
        
        printf("Escolha uma letra de 'A a H': ");
        scanf(" %c", &cartas[i].estado);

        printf("Escolha um número de 01 a 04: ");
        scanf("%s", cartas[i].codigo);

        printf("Nome da Cidade: ");
        scanf("%11s", cartas[i].cidade);

        printf("População: ");
        scanf("%d", &cartas[i].populacao);

        printf("Área (em km²): ");
        scanf("%f", &cartas[i].area);

        printf("PIB: ");
        scanf("%lf", &cartas[i].pib);

        printf("Número de pontos turísticos: ");
        scanf("%d", &cartas[i].pontos);
        
        printf("---------------------------------------------\n");
    }

    
    printf("\n--- Cartas cadastradas ---\n");
    for (i = 0; i < TOTAL_CARTAS; i++) {
        printf("\nDados da %dª carta:\n", i + 1);
        printf("Estado: %c\n", cartas[i].estado);
        printf("Código: %s\n", cartas[i].codigo);
        printf("Nome da Cidade: %s\n", cartas[i].cidade);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.3f km²\n", cartas[i].area);
        printf("PIB: %.9f bilhões de reais\n", cartas[i].pib);
        printf("Número de Pontos Turísticos: %d\n", cartas[i].pontos);
        printf("---------------------------------------------\n");
    }

    return 0;
}