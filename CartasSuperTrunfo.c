#include <stdio.h>

int main (){

//variaeis carta1
char est01;
char cod01[4];
char nomeCid01[50];
int popul01;
float area01;
float pib01;
int pontosTur01;
//variaveis carta2
char est02;
char cod02[4];
char nomeCid02[50];
int popul02;
float area02;
float pib02;
int pontosTur02;

//Entrada de dados carta 1
printf("\nDados Carta 1:\n");
printf("Digite o Estado (A-H): ");
scanf(" %c", &est01);
printf("Digite o Codigo da carta 01 a 04 referente o estado (ex:A01, B03): ");
scanf("%s", cod01);
printf("Digite o Nome da Cidade: ");
scanf(" %[^\n]", nomeCid01); //codigo para ler nomes com espaço
printf("Digite a População: ");
scanf("%d", &popul01);
printf("Digite a Area (em Km²): ");
scanf("%f", &area01);
printf("Digite o PIB da Cidade: ");
scanf("%f", &pib01);
printf("Digite o Numero de Pontos Turisticos: ");
scanf("%d", &pontosTur01);

//Entrada de dados carta 2
printf("\nDados Carta 2:\n");
printf("Digite o Estado (A-H): ");
scanf(" %c", &est02);
printf("Digite o Codigo da carta 01 a 04 referente o estado (ex:A01, B03): ");
scanf("%s", cod02);
printf("Digite o Nome da Cidade: ");
scanf(" %[^\n]", nomeCid02); //codigo para ler nomes com espaço
printf("Digite a População: ");
scanf("%d", &popul02);
printf("Digite a Area (em Km²): ");
scanf("%f", &area02);
printf("Digite o PIB da Cidade: ");
scanf("%f", &pib02);
printf("Digite o Numero de Pontos Turisticos: ");
scanf("%d", &pontosTur02);

//saida dos dados carta 1
printf("\n* Super Trunfo Carta 1 *\n");
printf("Estado: %c\n", est01);
printf("Codigo: %s\n", cod01);
printf("Nome da Cidade: %s\n", nomeCid01);
printf("Populacao: %d\n", popul01);
printf("Area: %.2f\n", area01);//codigo para ler duas casas decimais
printf("PIB: %.2f\n", pib01);
printf("Numeros de Pontos Turisticos: %d\n", pontosTur01);

//saida dos dados carta 2
printf("\n* Super Trunfo Carta 2 *\n");
printf("Estado: %c\n", est02);
printf("Codigo: %s\n", cod02);
printf("Nome da Cidade: %s\n", nomeCid02);
printf("Populacao: %d\n", popul02);
printf("Area: %.2f\n", area02);
printf("PIB: %.2f\n",pib02);
printf("Numeros de Pontos Turisticos: %d\n", pontosTur02);

return 0;

}