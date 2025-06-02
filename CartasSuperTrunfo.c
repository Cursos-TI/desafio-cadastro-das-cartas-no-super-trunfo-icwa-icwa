#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
// Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

int main() { 

    char Estado[50], Codigo_da_Carta[50], Nome_da_Cidade[50];
    int Populacao, Numero_de_Pontos_Turisticos;
    float Area_em_Km2, PIB;

    printf("Carta 1: \n");
    printf("Digite a Inicial do Estado: \n");
    scanf("%s", &Estado);
   
    printf("Digite o Código: \n");
    scanf("%s", &Codigo_da_Carta);
   
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &Nome_da_Cidade);
   
    printf("Digite a População: \n");
    scanf("%d", &Populacao);
    
    printf("Digite a Área em Km2: \n");
    scanf("%f", &Area_em_Km2);
    
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);
    
    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &Numero_de_Pontos_Turisticos);

    printf("Carta 2: \n");
    printf("Digite a Inicial do Estado: \n");
    scanf("%s", &Estado);
   
    printf("Digite o Código: \n");
    scanf("%s", &Codigo_da_Carta);
   
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &Nome_da_Cidade);
   
    printf("Digite a População: \n");
    scanf("%d", &Populacao);
    
    printf("Digite a Área em Km2: \n");
    scanf("%f", &Area_em_Km2);
    
    printf("Digite o PIB: \n");
    scanf("%f", &PIB);
    
    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &Numero_de_Pontos_Turisticos);
    
    printf("Carta1: \n");
    printf("Estado: %s \n", Estado);
    printf("Código: %s \n", Codigo_da_Carta);
    printf("Nome da Cidade: %s \n", Nome_da_Cidade);
    printf("População: %d \n", Populacao);
    printf("Área: %.2f \n", Area_em_Km2);
    printf("PIB: %.2f \n", PIB);
    printf("Número de Pontos Turísticos: %d \n", Numero_de_Pontos_Turisticos);
    
    printf("Carta2: \n");
    printf("Estado: %s \n", Estado);
    printf("Código: %s \n", Codigo_da_Carta);
    printf("Nome da Cidade: %s \n", Nome_da_Cidade);
    printf("População: %d \n", Populacao);
    printf("Área: %.2f \n", Area_em_Km2);
    printf("PIB: %.2f \n", PIB);
    printf("Número de Pontos Turísticos: %d \n", Numero_de_Pontos_Turisticos);

   

    return 0;
}
