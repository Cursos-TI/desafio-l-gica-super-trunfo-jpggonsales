#include <stdio.h>

//Setando as variaveis que utilizaremos para o funcionamento do programa 
int main(){
    char estado;
    char estado2;
    char codigo [4], codigo2 [4], cidade [30], cidade2 [30];
    int pontos, pontos2;
    unsigned long int  populacao, populacao2;
    float area, area2, pib, pib2;
//VARIAVEIS DE DENSIDADE E PIB PER CAPITA E SUPER PODER
    float densidade1, densidade2;
    float capita1, capita2;
    float superpoder1, superpoder2;
    float densidadeinversa1, densidadeinversa2;
//VARIAVEIS DE COMPARAÇÃO
    int resultpopulacao, resultarea, resultpib, resultpontos;
    int resultdensidade, resultcapita, resultpoder;     

//Instruindo o usúario a digitar as informações das cartas e armazenando em variaveis
    printf("Qual estado da primeira carta:\n");
    scanf(" %c", &estado);
    printf("Qual estado da segunda carta: \n");
    scanf(" %c", &estado2);

    printf("Qual o codigo da primeira carta: \n");
    scanf(" %s", codigo);
    printf("Qual o codigo da segunda carta: \n");
    scanf(" %s", codigo2);

    printf("Qual o nome da cidade da primeira carta: \n");
    scanf(" %s", cidade);
    printf("Qual o nome da cidade da segunda carta: \n");
    scanf(" %s", cidade2);

    printf("Qual a população da primeira carta: \n");
    scanf(" %lu", &populacao);
    printf("Qual a população da segunda carta: \n");
    scanf(" %lu", &populacao2);

    printf("Qual a área da cidade da primeira carta: \n");
    scanf(" %f", &area);
    printf("Qual área da cidade da segunda carta: \n");
    scanf(" %f", &area2);

    printf("Qual o pib da primeira cidade: \n");
    scanf(" %f", &pib);
    printf("Qual o pib da segunda cidade: \n");
    scanf(" %f", &pib2);

    printf("Qual o número de pontos turisticos da primeira cidade: \n");
    scanf(" %d", &pontos);
    printf("Qual o número de pontos turisticos da segunda cidade: \n");
    scanf(" %d", &pontos2);

    //CALCULANDO DENSIDADE E PIB PER CAPITA
    densidade1 = (float) populacao / area;
    densidade2 = (float) populacao2 / area2;
    capita1 = pib / populacao;
    capita2 = pib2 / populacao2;
    densidadeinversa1 = 1.0 / densidade1;
    densidadeinversa2 = 1.0 / densidade2;
    
    //CALCULANDO SUPER PODER E DENSIDADE INVERSA

    superpoder1 = (float) populacao + area + pib + pontos + capita1 + densidadeinversa1;
    superpoder2 = (float) populacao2 + area2 + pib2 + pontos2 + capita2 + densidadeinversa2;

    //Comparando os valores 
    resultpopulacao = populacao > populacao2;
    resultarea = area > area2;
    resultpib = pib > pib2;
    resultpontos = pontos > pontos2;
    resultdensidade = densidade1 < densidade2;
    resultcapita = capita1 > capita2;
    resultpoder = superpoder1 > superpoder2;

    

    //Informações carta 1
    printf("----CARTA 1----\n");
    printf("Estado: %c \n", estado);
    printf("Codigo: %s \n", codigo);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %lu \n", populacao);
    printf("Área: %.2f km² \n", area );
    printf("Pib: %.2f bilhões de reais \n", pib);
    printf("Número de pontos Turísticos: %d \n", pontos);
    printf("A densidade é: %.2f hab/km²\n", densidade1);
    printf("O PIB per Capita é: %.2f reais\n", capita1);
    //PRINTF Á BAIXO PARA TESTAR O CALCULO DO SUPER PODER
    //printf("O Super poder é: %.2f\n", superpoder1);
    
    //Informações carta 2
    printf("----CARTA 2----\n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("Pib: %.2f bilhões de reais \n", pib2);
    printf("Número de pontos Turísticos: %d \n", pontos2);
    printf("A densidade populacional é: %.2f hab/km² \n", densidade2);
    printf("O PIB per Capita é: %.2f reais \n", capita2);
    //PRINTF Á BAIXO PARA TESTAR O CALCULO DO SUPER PODER
    //printf("O Super poder é: %.2f\n", superpoder2);

    //Resultado das comparações 
    printf("----COMPARAÇÃO----\n");
    printf("População: %d\n", resultpopulacao);
    printf("Área: %d\n", resultarea);
    printf("PIB: %d\n", resultpib);
    printf("Pontos turisticos: %d\n", resultpontos);
    printf("Densidade populacional: %d\n", resultdensidade);
    printf("PIB per Capita: %d\n", resultcapita);
    printf("Super Poder: %d\n", resultpoder);
    

    //COMPARANDO PONTOS TURISTICOS COM IF E ELSE 
    printf("Comparação das cartas (Atributo: Pontos turisticos):\n");
    printf("Carta 1 - %s: %d\n ", cidade, pontos);
    printf("Carta 2 - %s: %d\n ", cidade2, pontos2);
    if (pontos >= pontos2){
        printf("Carta 1 venceu!!\n");
    } else{
        printf("Carta 2 Venceu!");
         
    }

    
    
    
return 0;
}
