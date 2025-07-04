#include <stdio.h>

int main() {

    char estado,estado1,codigo[4],codigo1[4],cidade[50],cidade1[50];
    unsigned long int populacao, populacao1;
    int pTuristicos,pTuristicos1;
    float area,area1,pib,pib1,densidade,pCapita,densidade1,pCapita1;
    float superPoder,superPoder1;

//Cadastro da carta 1 - Pega e salva no scanf.
  
    printf("\n\nCADASTRO DA CARTA 1\n\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf(" %c",&estado);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf(" %s",codigo);

    printf("Digite o nome da cidade (ex:Rio_de_Janeiro):\n");
    scanf(" %s",cidade);

    printf("Digite o número de habitantes da cidade:\n");
    scanf(" %u",&populacao);
    
    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf(" %f",&area);
    
    printf("Digite o Produto Interno Bruto da cidade:\n");
    scanf(" %f",&pib);

    printf("Digite quantidade de pontos turísticos na cidade:\n"); 
    scanf(" %d",&pTuristicos);


//Calcula a densidade populacional da cidade

    densidade=populacao/area;


//Calcula o pib per capita e super poder.

    pCapita=pib/populacao;

    superPoder = populacao + area + pib + pTuristicos + pCapita + (1 / densidade);


//Printa a carta 1 na tela o que foi salvo.


    printf("\n\nCarta 1:\n\n");

    printf("Estado:%c\n",estado);

    printf("Código:%s\n",codigo);

    printf("Nome da Cidade: %s\n",cidade);

    printf("População:%u\n",populacao);

    printf("Área: %.2f km²\n",area);

    printf("PIB: %.2f bilhões de reais\n",pib);

    printf("Número de Pontos Turísticos:%d\n",pTuristicos);

    printf("Densidade Populacional: %.2f hab/km²\n",densidade);

    printf("PIB per Capita: %.2f reais\n",pCapita);

    printf("Super Poder: %.2f\n",superPoder);


//Cadastro da carta 2 - Pega e salva no scanf.
  

    printf("\n\nCADASTRO DA CARTA 2\n\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf(" %c",&estado1);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf(" %s",codigo1);

    printf("Digite o nome da cidade (ex:Rio_de_Janeiro):\n");
    scanf(" %s",cidade1);

    printf("Digite o número de habitantes da cidade:\n");
    scanf(" %u",&populacao1);
    
    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf(" %f",&area1);
    
    printf("Digite o Produto Interno Bruto da cidade:\n");
    scanf(" %f",&pib1);

    printf("Digite quantidade de pontos turísticos na cidade:\n"); 
    scanf(" %d",&pTuristicos1);
    

//Calcula a densidade populacional e super poder da cidade 2 


    densidade1=populacao1/area1;

    superPoder1 = populacao1 + area1 + pib1 + pTuristicos1 + pCapita1 + (1 / densidade1);


//Calcula o pib da cidade 2 per capita.


    pCapita1=pib1/populacao1;


//Printa a carta 2 na tela o que foi salvo.


    printf("\n\nCarta 2:\n\n");

    printf("Estado:%c\n",estado1);

    printf("Código:%s\n",codigo1);

    printf("Nome da Cidade: %s\n",cidade1);

    printf("População:%u\n",populacao1);

    printf("Área: %.2f km²\n",area1);

    printf("PIB: %.2f bilhões de reais\n",pib1);

    printf("Número de Pontos Turísticos:%d\n",pTuristicos1);

    printf("Densidade Populacional: %.2f hab/km²\n",densidade1);

    printf("PIB per Capita: %.2f reais\n",pCapita1);

    printf("Super Poder: %.2f\n",superPoder1);


//compara carta 1 e a carta 2


    printf("\n\nComparação de Cartas:\n\n");

    printf("Carta 1 = 1 - Carta 2 = 0\n");

    printf("População: %u venceu\n", populacao1 > populacao1);

    printf("Área: %d venceu\n", area > area1);

    printf("PIB: %d venceu\n", pib > pib1);

    printf("Pontos Turísticos: %d venceu\n", pTuristicos > pTuristicos1);

    printf("Densidade Populacional: %d venceu\n", densidade < densidade1);  // Menor vence

    printf("PIB per Capita: %d venceu\n", pCapita > pCapita1);

    printf("Super Poder:%d venceu\n", superPoder > superPoder1);




    return 0;
}
