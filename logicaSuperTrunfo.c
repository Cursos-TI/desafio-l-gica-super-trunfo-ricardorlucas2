#include <stdio.h>

int main() {

char estado[3], estado2[3];  //antes era apenas uma letra, agora são duas letras para representar o estado
char cidade[50], cidade2[50], codigocarta[4], codigocarta2[4]; //usar %c 1 caracter  %s para string
int turismo, turismo2; //usar %d para inteiro
float area, area2, pib, pib2, densidade, densidade2;  //usar %f e %.2f para 2 casas decimais
unsigned long int populacao, populacao2;
float superpoder, superpoder2;


printf("Seja bem vindo ao jogo Super Trunfo! \n\n"); //Boas vindas

printf("-----------Carta 1-----------\n\n"); //Primeira carta

printf("Escolha o Estado(sigla): ");
scanf(" %2s", estado);
printf("Escolha o código de uma carta(ex: A01): ");
scanf("%s", codigocarta);
printf("Informe o nome da cidade: ");
scanf(" %[^\n]", cidade); // %[^\n] permite ler strings com espaços
printf("Informe o número da população: ");
scanf("%lu", &populacao);
printf("Informe a área da cidade em km²: ");
scanf("%f", &area);
printf("Informe o PIB da cidade: ");
scanf("%f", &pib);
densidade = populacao / area; // Densidade populacional
printf("Informe o número de pontos turisticos: ");
scanf("%d", &turismo);

printf( "\n");  // pula uma linha
float pib_per_capita = (pib * 1000000000) / populacao; // PIB per Capita

printf("-----------Carta 2-----------\n\n"); //segunda carta

printf("Escolha o Estado(sigla): ");
scanf(" %2s", estado2);
printf("Escolha o código de uma carta(ex: B02): ");
scanf("%s", codigocarta2);
printf("Informe o nome da cidade: ");
scanf(" %[^\n]", cidade2); // %[^\n] permite ler strings com espaços
printf("Informe o número da população: ");
scanf("%lu", &populacao2);
printf("Informe a área da cidade em km²: ");
scanf("%f", &area2);
printf("Informe o PIB da cidade: ");
scanf("%f", &pib2);
densidade2 = populacao2 / area2; // Densidade populacional
printf("Informe o número de pontos turisticos ");
scanf("%d", &turismo2);

printf("\n");  // pula uma linha
float pib_per_capita2 = (pib2 * 1000000000) / populacao2; // PIB per Capita

//Dados impressos

printf("Sua carta 1: \n\n"); //Descrição da primeira carta
printf("Estado: %s\n", estado);
printf("Código da carta: %s\n", codigocarta);
printf("Nome da cidade: %s\n", cidade);
printf("População: %lu\n", populacao);
printf("Área (em km²): %.2f\n", area);
printf("PIB: %.2f bilhões de reaisb\n", pib);
printf("Número de Pontos Túristicos: %d\n", turismo);
printf("Densidade populacional: %.2f hab/km²\n", densidade); //Densidade populacional
printf("PIB per Capita: R$ %.2f reais\n\n", pib_per_capita); //PIB per Capita digitado em bilhões

printf("Sua carta 2: \n\n"); //Descrição da segunda carta
printf("Estado: %s\n", estado2);
printf("Código da carta: %s\n", codigocarta2);
printf("Nome da cidade: %s\n", cidade2);
printf("População: %lu\n", populacao2);
printf("Área (em km²): %.2f\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Túristicos: %d\n", turismo2);
printf("Densidade populacional: %.2f hab/km²\n", densidade2); //Densidade populacional
printf("PIB per Capita: R$ %.2f reais\n\n", pib_per_capita2); //PIB per Capita

printf("Comparação de Cartas (Atributo: População):\n\n");  // Comparação de cartas

    printf("Carta 1 - %s (%2s): %lu habitantes\n", cidade, estado, populacao);    // Exibe a carta 1
    printf("Carta 2 - %s (%2s): %lu habitantes\n", cidade2, estado2, populacao2); // Exibe a carta 2


    if (populacao > populacao2) {  // Compara a população
        printf("Resultado> Carta 1 (%s) venceu!\n", cidade);
    } else if (populacao < populacao2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    
    printf("-----------Parabéns!-----------\n\n");


    return 0;
}