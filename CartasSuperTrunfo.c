#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int cdcidade, tur;
    char nome[50];
    float populacao;
    float area;
    float pib;
    int turistico;
    

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite o Codigo da Cidade:");
    scanf("%d", &cdcidade);

    printf("Digite o Nome da Cidade:");
    scanf("%s", &nome);

    printf("Digite a População da Cidade:");
    scanf("%f", &populacao);


    printf("Area da cidade:");
    scanf("%f", &area);

    printf("Pib da Cidade:");
    scanf("%f", &pib);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nDados da Cidade!\n");
    printf("Codigo: %d\n", cdcidade);
    printf("Nome da Cidade: %s\n", nome);
    printf("Populacao: %f\n", populacao);
    printf("Area: %f\n", area);
    printf("Pib: %f\n", pib);

    return 0;

}
