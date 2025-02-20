printf("Agora digite os dados da segunda carta\n");
    int idade2;                                       
    int populacao2; 
    int pontos2;                                                                     
    float area2;                                   
    double pib2;                 
    char estado2;                                     
    char codigo2[4];                                
    char cidade2[12];

    printf ("Digite um número para a segunda carta: \n", idade2);
    scanf("%d", &idade2);
    printf("---------------------------------------------\n");

    printf("Uma letra de 'A a H' sem repetir: \n", estado2);
    scanf(" %c", &estado2); 
    printf("---------------------------------------------\n");

    printf("Escoha um número de 01 a 04 sem repetir: \n", codigo2);
    scanf("%s", &codigo2);
    printf("---------------------------------------------\n");

    printf ("Nome da Cidade da segunda carta: \n", cidade2);
    scanf ("%11s", &cidade2);
    printf("---------------------------------------------\n");

    printf("População para segunda carta: \n", populacao2);
    scanf("%d", &populacao2);
    printf("---------------------------------------------\n");

    printf("Área (em km²):: \n", area2);  
    scanf(":%f", &area2); 
    printf("---------------------------------------------\n");

    printf("PIB da segunda carta: \n", pib2);
    scanf(":%lf", &pib2);  
    printf("---------------------------------------------\n");

    printf("Números de pontos Turísticos da segunda carta: \n"pontos2);
    scanf(":%d", &pontos2);
    printf("---------------------------------------------\n");

    printf("Esse são os dados da sua segunda carta \n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.9f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n",pontos2);


