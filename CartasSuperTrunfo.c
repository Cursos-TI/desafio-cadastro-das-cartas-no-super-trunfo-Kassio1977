#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   
    char codigo[3];
    char nome[20];
    int populacao;
    float area;
    float pib;
    int turismo;
    float densidade;
    float percapita;

        printf("Digite o código da cidade: \n");
        scanf("%s", &codigo);
        
        printf("Digite o nome da cidade: \n");
        scanf("%s", &nome);
        
        printf("Digite a População: \n");
        scanf("%d", &populacao);
        
        printf("Digite a área: \n");
        scanf("%f", &area);
        
        printf("Digite o PIB: \n");
        scanf("%f", &pib);
        
        printf("Digite o número de pontos turísticos: \n");
        scanf("%d", &turismo);
        
        printf("Código: %s\n", codigo);
        printf("Nome: %s\n", nome);
        printf("População: %d\n", populacao);
        printf("Area: %f\n", area);
        printf("PIB: %.2f\n", pib);
        printf("Número de pontos turísticos: %d\n", turismo);

            densidade = (populacao / area);
            percapita = (pib / populacao);

            printf("Densidade populacional: %.2f\n", densidade);
            printf("PIB per capita: %.2f\n", percapita);
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
