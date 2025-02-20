#include <stdio.h>

int main() {

printf("---------------------------------------------\n");
printf("-      Bem Vindo ao Jogo Super Trunfo       -\n");
printf("---------------------------------------------\n");

printf("Primeiro voçê vai digitar os dados da primeira carta\n");
printf("____________________________________________________\n");
    int idade;                                       
    int populacao; 
    int pontos;                                                                     
    float area;                                   
    double pibbilhoesdereais;                 
    char estado;                                     
    char codigo[4];                                
    char cidade[12];                 

    printf ("Digite um número: \n", idade);
    scanf("%d", &idade);
    printf("---------------------------------------------\n");

    printf("Escolha uma letra de 'A a H': \n", estado);
    scanf(" %c", &estado); 
    printf("---------------------------------------------\n");

    printf("Escoha um número de 1 a 4: \n", codigo);
    scanf("%s", &codigo);
    printf("---------------------------------------------\n");

    printf ("Nome da Cidade: \n", cidade);
    scanf ("%11s", &cidade);
    printf("---------------------------------------------\n");

    printf("População: \n", populacao);
    scanf("%d", &populacao);
    printf("---------------------------------------------\n");

    printf("Área (em km²): \n", area);  
    scanf(":%f", &area); 
    printf("---------------------------------------------\n");

    printf("PIB: \n", pibbilhoesdereais);
    scanf(":%lf", &pibbilhoesdereais);  
    printf("---------------------------------------------\n");

    printf("Números de pontos Turísticos: \n");
    scanf(":%d", &pontos);
    printf("---------------------------------------------\n");

    printf("Esse são os dados da sua carta 1\n");

    printf("Carta: %d\n", idade);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.3f km²\n", area);
    printf("PIB: %.9f bilhões de reais\n", pibbilhoesdereais);
    
    printf("Agora digite os dados da segunda carta\n");

    printf ("Digite um número: \n", idade);
    scanf("%d", &idade);
    printf("---------------------------------------------\n");

    printf("Escolha uma letra de 'A a H': \n", estado);
    scanf(" %c", &estado); 
    printf("---------------------------------------------\n");

    printf("Escoha um número de 1 a 4: \n", codigo);
    scanf("%s", &codigo);
    printf("---------------------------------------------\n");

    printf ("Nome da Cidade: \n", cidade);
    scanf ("%11s", &cidade);
    printf("---------------------------------------------\n");

    printf("População: \n", populacao);
    scanf("%d", &populacao);
    printf("---------------------------------------------\n");

    printf("Área (em km²): \n", area);  
    scanf(":%f", &area); 
    printf("---------------------------------------------\n");

    printf("PIB: \n", pibbilhoesdereais);
    scanf(":%lf", &pibbilhoesdereais);  
    printf("---------------------------------------------\n");

    printf("Números de pontos Turísticos: \n");
    scanf(":%d", &pontos);
    printf("---------------------------------------------\n");

    printf("Esse são os dados da sua carta 2\n");

    printf("Carta 2\n");
    printf("Carta: %d\n", idade);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.3f km²\n", area);
    printf("PIB: %.9f bilhões de reais\n", pibbilhoesdereais);








    return 0;
}