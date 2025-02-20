#include <stdio.h>

int main() {

printf("---------------------------------------------\n");
printf("-      Bem Vindo ao Jogo Super Trunfo       -\n");
printf("---------------------------------------------\n");

printf("Primeiro voçê vai digitar os dados da primeira carta\n");
printf("____________________________________________________\n");
    int idade1;                                       
    int populacao1; 
    int pontos1;                                                                     
    float area1;                                   
    double pib1;                 
    char estado1;                                     
    char codigo1[4];                                
    char cidade1[12];                 

    printf ("Digite um número: \n", idade1);
    scanf("%d", &idade1);
    printf("---------------------------------------------\n");

    printf("Escolha uma letra de 'A a H': \n", estado1);
    scanf(" %c", &estado1); 
    printf("---------------------------------------------\n");

    printf("Escoha um número de 01 a 04: \n", codigo1);
    scanf("%s", &codigo1);
    printf("---------------------------------------------\n");

    printf ("Nome da Cidade: \n", cidade1);
    scanf ("%11s", &cidade1);
    printf("---------------------------------------------\n");

    printf("População: \n", populacao1);
    scanf("%d", &populacao1);
    printf("---------------------------------------------\n");

    printf("Área (em km²): \n", area1);  
    scanf(":%f", &area1); 
    printf("---------------------------------------------\n");

    printf("PIB: \n", pib1);
    scanf(":%lf", &pib1);  
    printf("---------------------------------------------\n");

    printf("Números de pontos Turísticos: \n",pontos1);
    scanf(":%d", &pontos1);
    printf("---------------------------------------------\n");

    printf("Esse são os dados da sua primeira carta\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.9f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d",pontos1);





    return 0;
}