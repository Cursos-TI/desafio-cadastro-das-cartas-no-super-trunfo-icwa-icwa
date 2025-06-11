#include <stdio.h>
int main() {

//variaveis para armazenar os dados da Carta 1

char Estado_Carta1[50], Codigo_da_Carta1[50], Nome_da_Cidade_Carta1[50];
int Populacao_Carta1, Numero_de_Pontos_Turisticos_Carta1;
float Area_em_Km2_Carta1, PIB_Carta1, Densidade_Populacional_Carta1, PIB_per_Capita_Carta1;

// Variaveis para armazenar os dados da Carta 2
char Estado_Carta2[50], Codigo_da_Carta2[50], Nome_da_Cidade_Carta2[50];
int Populacao_Carta2, Numero_de_Pontos_Turisticos_Carta2;
float Area_em_Km2_Carta2, PIB_Carta2, Densidade_Populacional_Carta2, PIB_per_Capita_Carta2;

printf("****Jogo do Trunfo****\n");

//Solicitação de dados para a carta 1
printf("Carta 1: \n");
printf("Digite a Inicial do Estado: \n");   
scanf("%s", Estado_Carta1);

printf("Digite o Código: \n");
scanf("%s", Codigo_da_Carta1);

printf("Digite o Nome da Cidade: \n");
scanf("%s", Nome_da_Cidade_Carta1);

printf("Digite a População: \n");
scanf("%d", &Populacao_Carta1);

printf("Digite a Área em Km2: \n");
scanf("%f", &Area_em_Km2_Carta1);

printf("Digite o PIB: \n");
scanf("%f", &PIB_Carta1);

printf("Digite o Número de Pontos Turísticos: \n");
scanf("%d", &Numero_de_Pontos_Turisticos_Carta1);

// Cálculos da Carta 1
// Variáveis para armazenar os resultados dos cálculos

Densidade_Populacional_Carta1 = (float) Populacao_Carta1 / Area_em_Km2_Carta1;
PIB_per_Capita_Carta1 = (float) PIB_Carta1 / Populacao_Carta1;  

//Solicitação de dados para a carta 2
printf("Carta 2: \n");
printf("Digite a Inicial do Estado: \n");
scanf("%s", Estado_Carta2);

printf("Digite o Código: \n");
scanf("%s", Codigo_da_Carta2);

printf("Digite o Nome da Cidade: \n");
scanf("%s", Nome_da_Cidade_Carta2);

printf("Digite a População: \n");
scanf("%d", &Populacao_Carta2);

printf("Digite a Área em Km2: \n");
scanf("%f", &Area_em_Km2_Carta2);

printf("Digite o PIB: \n");
scanf("%f", &PIB_Carta2);

printf("Digite o Número de Pontos Turísticos: \n");
scanf("%d", &Numero_de_Pontos_Turisticos_Carta2);

// Cálculos da Carta 2
// Variáveis para armazenar os resultados dos cálculos

Densidade_Populacional_Carta2 = (float) Populacao_Carta2 / Area_em_Km2_Carta2;
PIB_per_Capita_Carta2 = (float) PIB_Carta2 / Populacao_Carta2; 

// Exibição dos resultados da Carta 1
printf("\n****Dados da Carta 1****\n");
printf("Estado: %s\n", Estado_Carta1);
printf("Código: %s\n", Codigo_da_Carta1);
printf("Nome da Cidade: %s\n", Nome_da_Cidade_Carta1);
printf("População: %d\n", Populacao_Carta1);
printf("Área em Km2: %.2f\n", Area_em_Km2_Carta1);
printf("PIB: %.2f\n", PIB_Carta1);
printf("Número de Pontos Turísticos: %d\n", Numero_de_Pontos_Turisticos_Carta1);
printf("Densidade Populacional: %.2f\n", Densidade_Populacional_Carta1);
printf("PIB per Capita: %.2f\n", PIB_per_Capita_Carta1);

// Exibição dos resultados da Carta 2
printf("\n****Dados da Carta 2****\n");
printf("Estado: %s\n", Estado_Carta2);
printf("Código: %s\n", Codigo_da_Carta2);
printf("Nome da Cidade: %s\n", Nome_da_Cidade_Carta2);
printf("População: %d\n", Populacao_Carta2);
printf("Área em Km2: %.2f\n", Area_em_Km2_Carta2);
printf("PIB: %.2f\n", PIB_Carta2);
printf("Número de Pontos Turísticos: %d\n", Numero_de_Pontos_Turisticos_Carta2);
printf("Densidade Populacional: %.2f\n", Densidade_Populacional_Carta2);
printf("PIB per Capita: %.2f\n", PIB_per_Capita_Carta2);

// Comparação entre as cartas
printf("\n****Comparação entre as Cartas****\n");
int Resultado_Populacao = Populacao_Carta1 > Populacao_Carta2;
printf("No quesito População, o vencedor é a Carta %d!\n", Resultado_Populacao ? 1 : 2) ;
int Resultado_Area = Area_em_Km2_Carta1 > Area_em_Km2_Carta2;
printf("No quesito Área, o vencedor é a Carta %d!\n", Resultado_Area ? 1 : 2 );
int Resultado_PIB = PIB_Carta1 > PIB_Carta2;
printf("No quesito PIB, o vencedor é a Carta %d!\n", Resultado_PIB ? 1 : 2);
int Resultado_Pontos_Turisticos = Numero_de_Pontos_Turisticos_Carta1 > Numero_de_Pontos_Turisticos_Carta2;
printf("No quesito Número de Pontos Turísticos, o vencedor é a Carta %d!\n", Resultado_Pontos_Turisticos ? 1 : 2 );
int Resultado_Densidade = 1/Densidade_Populacional_Carta1 > 1/Densidade_Populacional_Carta2;
printf("No quesito Densidade Populacional, o vencedor é a Carta %d!\n", Resultado_Densidade ? 1 : 2);
int Resultado_PIB_per_Capita = PIB_per_Capita_Carta1 > PIB_per_Capita_Carta2;
printf("No quesito PIB per Capita, o vencedor é a Carta %d!\n", Resultado_PIB_per_Capita ? 1 : 2);

// Cálculo do resultado final de cada carta
float Resultado_Carta1 = (float) Populacao_Carta1 + Area_em_Km2_Carta1 + PIB_Carta1 + Numero_de_Pontos_Turisticos_Carta1 + 1/Densidade_Populacional_Carta1 + PIB_per_Capita_Carta1;
printf("\nResultado da Carta 1: %.2f\n", Resultado_Carta1);
float Resultado_Carta2 = (float) Populacao_Carta2 + Area_em_Km2_Carta2 + PIB_Carta2 + Numero_de_Pontos_Turisticos_Carta2 + 1/Densidade_Populacional_Carta2 + PIB_per_Capita_Carta2;   
printf("Resultado da Carta 2: %.2f\n", Resultado_Carta2);

printf("\n****Gran Final****\n");

int Resultado_Vencedor = Resultado_Carta1 > Resultado_Carta2;
printf("O vencedor é a Carta %d!\n", Resultado_Vencedor ? 1 : 2);


printf("Fim do Jogo do Trunfo!\n");

return 0;
}






