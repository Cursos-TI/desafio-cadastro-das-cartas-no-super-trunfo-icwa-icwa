#include <stdio.h>
int main() {
char Estado[50], Codigo_da_Carta[50], Nome_da_Cidade[50];
int Populacao, Numero_de_Pontos_Turisticos;
float Area_em_Km2, PIB, Densidade_Populacional, PIB_per_Capita;

printf("****Jogo de Trunfo****\n");
//Solicitação de dados para a carta 1
printf("Carta 1: \n");
printf("Digite a Inicial do Estado: \n");   
scanf("%s", Estado);

printf("Digite o Código: \n");
scanf("%s", Codigo_da_Carta);

printf("Digite o Nome da Cidade: \n");
scanf("%s", Nome_da_Cidade);

printf("Digite a População: \n");
scanf("%d", &Populacao);

printf("Digite a Área em Km2: \n");
scanf("%f", &Area_em_Km2);

printf("Digite o PIB: \n");
scanf("%f", &PIB);

printf("Digite o Número de Pontos Turísticos: \n");
scanf("%d", &Numero_de_Pontos_Turisticos);

// Cálculos da Carta 1
// Reutilizando as variáveis já declaradas
Densidade_Populacional = (float) Populacao / Area_em_Km2;
PIB_per_Capita = (float) PIB / Populacao;  

//Solicitação de dados para a carta 2
printf("Carta 2: \n");
printf("Digite a Inicial do Estado: \n");
scanf("%s", Estado);

printf("Digite o Código: \n");
scanf("%s", Codigo_da_Carta);

printf("Digite o Nome da Cidade: \n");
scanf("%s", Nome_da_Cidade);

printf("Digite a População: \n");
scanf("%d", &Populacao);

printf("Digite a Área em Km2: \n");
scanf("%f", &Area_em_Km2);

printf("Digite o PIB: \n");
scanf("%f", &PIB);

printf("Digite o Número de Pontos Turísticos: \n");
scanf("%d", &Numero_de_Pontos_Turisticos);

// Cálculos da Carta 2
// Reutilizando as variáveis já declaradas
Densidade_Populacional = (float) Populacao / Area_em_Km2;
PIB_per_Capita = (float) PIB / Populacao; 

// Exibição dos resultados da Carta 1
printf("\n****Dados da Carta 1****\n");
printf("Estado: %s\n", Estado);
printf("Código: %s\n", Codigo_da_Carta);
printf("Nome da Cidade: %s\n", Nome_da_Cidade);
printf("População: %d\n", Populacao);
printf("Área em Km2: %.2f\n", Area_em_Km2);
printf("PIB: %.2f\n", PIB);
printf("Número de Pontos Turísticos: %d\n", Numero_de_Pontos_Turisticos);
printf("Densidade Populacional: %.2f\n", Densidade_Populacional);
printf("PIB per Capita: %.2f\n", PIB_per_Capita);

// Exibição dos resultados da Carta 2
printf("\n****Dados da Carta 2****\n");
printf("Estado: %s\n", Estado);
printf("Código: %s\n", Codigo_da_Carta);
printf("Nome da Cidade: %s\n", Nome_da_Cidade);
printf("População: %d\n", Populacao);
printf("Área em Km2: %.2f\n", Area_em_Km2);
printf("PIB: %.2f\n", PIB);
printf("Número de Pontos Turísticos: %d\n", Numero_de_Pontos_Turisticos);
printf("Densidade Populacional: %.2f\n", Densidade_Populacional);
printf("PIB per Capita: %.2f\n", PIB_per_Capita);

return 0;
}