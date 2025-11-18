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
//VARIAVEIS PARA O SWITCH
    int opcao1, opcao2;

    //NOVAS VARIAVEIS PARA O DESAFIO MESTRE (mantive nomes diferentes para não conflitar)
    float val1_a1, val2_a1, val1_a2, val2_a2;
    float soma1, soma2;
    int pontosAtrib1, pontosAtrib2;

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


    //Switch para interatividade do Usuario 
    printf("----QUAL O PRIMEIRO ATRIBUTO QUE VOCE DESEJA COMPARAR?----\n");
    printf("1 - População.\n");
    printf("2 - Área.\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - densidade demografica\n");
    scanf("%d", &opcao1);

    // agora mostramos o menu dinâmico para o segundo atributo
    printf("----QUAL O SEGUNDO ATRIBUTO QUE VOCE DESEJA COMPARAR?----\n");
    if(opcao1 != 1) printf("1 - População.\n");
    if(opcao1 != 2) printf("2 - Área.\n");
    if(opcao1 != 3) printf("3 - PIB\n");
    if(opcao1 != 4) printf("4 - Pontos turísticos\n");
    if(opcao1 != 5) printf("5 - densidade demografica\n");
    scanf("%d", &opcao2);

    //pega valores do primeiro atributo escolhido
    if(opcao1 == 1){
        val1_a1 = (float) populacao;
        val2_a1 = (float) populacao2;
    } else if(opcao1 == 2){
        val1_a1 = area;
        val2_a1 = area2;
    } else if(opcao1 == 3){
        val1_a1 = pib;
        val2_a1 = pib2;
    } else if(opcao1 == 4){
        val1_a1 = (float) pontos;
        val2_a1 = (float) pontos2;
    } else { 
        val1_a1 = densidade1;
        val2_a1 = densidade2;
    }

    //pega valores do segundo atributo escolhido
    if(opcao2 == 1){
        val1_a2 = (float) populacao;
        val2_a2 = (float) populacao2;
    } else if(opcao2 == 2){
        val1_a2 = area;
        val2_a2 = area2;
    } else if(opcao2 == 3){
        val1_a2 = pib;
        val2_a2 = pib2;
    } else if(opcao2 == 4){
        val1_a2 = (float) pontos;
        val2_a2 = (float) pontos2;
    } else { 
        val1_a2 = densidade1;
        val2_a2 = densidade2;
    }

    //calcula soma
    soma1 = val1_a1 + val1_a2;
    soma2 = val2_a1 + val2_a2;

    //calcula pontuação por atributo (usa ternário; densidade é invertida)
    pontosAtrib1 = 0;
    pontosAtrib2 = 0;

    if(opcao1 == 5){
        (val1_a1 < val2_a1) ? pontosAtrib1++ : (val2_a1 < val1_a1 ? pontosAtrib2++ : (pontosAtrib1+=0));
    } else {
        (val1_a1 > val2_a1) ? pontosAtrib1++ : (val2_a1 > val1_a1 ? pontosAtrib2++ : (pontosAtrib1+=0));
    }

    if(opcao2 == 5){
        (val1_a2 < val2_a2) ? pontosAtrib1++ : (val2_a2 < val1_a2 ? pontosAtrib2++ : (pontosAtrib1+=0));
    } else {
        (val1_a2 > val2_a2) ? pontosAtrib1++ : (val2_a2 > val1_a2 ? pontosAtrib2++ : (pontosAtrib1+=0));
    }

    //Exibição clara do resultado
    printf("\n----RESULTADO FINAL----\n");
    printf("%s vs %s\n\n", cidade, cidade2);

    printf("Atributo 1 escolhido: ");
    if(opcao1 == 1) printf("População\n");
    else if(opcao1 == 2) printf("Área\n");
    else if(opcao1 == 3) printf("PIB\n");
    else if(opcao1 == 4) printf("Pontos Turísticos\n");
    else printf("Densidade Demográfica\n");

    printf("Atributo 2 escolhido: ");
    if(opcao2 == 1) printf("População\n");
    else if(opcao2 == 2) printf("Área\n");
    else if(opcao2 == 3) printf("PIB\n");
    else if(opcao2 == 4) printf("Pontos Turísticos\n");
    else printf("Densidade Demográfica\n");

    printf("\nValores do atributo 1: Cidade1 = %.2f | Cidade2 = %.2f\n", val1_a1, val2_a1);
    printf("Valores do atributo 2: Cidade1 = %.2f | Cidade2 = %.2f\n", val1_a2, val2_a2);

    printf("\nSoma dos atributos: Cidade1 = %.2f | Cidade2 = %.2f\n", soma1, soma2);

    if(soma1 > soma2){
        printf("\nVencedor por soma: %s\n", cidade);
    } else if(soma2 > soma1){
        printf("\nVencedor por soma: %s\n", cidade2);
    } else {
        printf("\nEmpate por soma!\n");
    }

    printf("\nPontuação por atributos (cada atributo vale 1 ponto): Cidade1 = %d | Cidade2 = %d\n", pontosAtrib1, pontosAtrib2);

    return 0;

}