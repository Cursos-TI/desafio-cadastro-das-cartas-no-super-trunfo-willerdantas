#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Programa Cartas Super Trunfo \n");
    printf("Cadastro de cartas \n");
    printf("\n");
    
    char estado1, estado2, cod_carta1[3], cod_carta2[3], nome_cidade1[30], nome_cidade2[30];
    int populacao1, populacao2, ponto_turistico1, ponto_turistico2;
    float area1, area2, pib1, pib2;
    float dens_populacional1, dens_populacional2;
    float pib_percapito1, pib_percapito2;
    float superPoder1, superPoder2;

    printf("Cadastrar carta 01\n");
    printf("Digite uma letra de A a H que identifica o estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", cod_carta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade1);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &ponto_turistico1);

    printf("\n");
    printf("Cadastrar carta 02\n");
    printf("Digite uma letra de A a H que identifica o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", cod_carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &ponto_turistico2);

    printf("Carta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", cod_carta1);
    printf("Nome da Cidade: %s \n", nome_cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de pontos turísticos: %d \n", ponto_turistico1);
    dens_populacional1 = populacao1 / area1;
    printf("Densidade populacional: %.2f hab/km² \n", dens_populacional1);
    pib_percapito1 = pib1 / populacao1;
    printf("PIB per capita: %.2f reais \n", pib_percapito1);
    printf("Super Poder: %.2f \n", superPoder1 = (float)(populacao1 + area1 + pib1 + ponto_turistico1 + dens_populacional1 + pib_percapito1));
    printf("\n");

    printf("Carta 2:");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", cod_carta2);
    printf("Nome da Cidade: %s \n", nome_cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de pontos turísticos: %d \n", ponto_turistico2);
    dens_populacional2 = populacao2 / area2;
    printf("Densidade populacional: %.2f hab/km² \n", dens_populacional2);
    pib_percapito2 = pib2 / populacao2;
    printf("PIB per capita: %.2f reais \n", pib_percapito2);
    printf("Super Poder: %.2f \n", superPoder2 = (float)(populacao2 + area2 + pib2 + ponto_turistico2 + dens_populacional2 + pib_percapito2));
    printf("\n");

    printf("Comparação das cartas:\n");
    printf("População: Carta 1 - %s vence (%d), Carta 2 - %s vence (%d)\n", cod_carta1, populacao1 > populacao2, cod_carta2, populacao2 > populacao1);
    printf("Área: Carta 1 - %s vence (%d), Carta 2 - %s vence (%d)\n", cod_carta1, area1 > area2, cod_carta2, area2 > area1);
    printf("PIB: Carta 1 - %s vence (%d), Carta 2 - %s vence (%d)\n", cod_carta1, pib1 > pib2, cod_carta2, pib2 > pib1);
    printf("Pontos Turísticos: Carta 1 - %s vence (%d), Carta 2 - %s vence (%d)\n", cod_carta1, ponto_turistico1 > ponto_turistico2, cod_carta2, ponto_turistico2 > ponto_turistico1);
    printf("Densidade Populacional: Carta 1 - %s vence (%d), Carta 2 - %s vence (%d)\n", cod_carta1, dens_populacional1 < dens_populacional2, cod_carta2, dens_populacional2 < dens_populacional1);
    printf("PIB per Capita: Carta 1 - %s vence (%d), Carta 2 - %s vence (%d)\n", cod_carta1, pib_percapito1 > pib_percapito2, cod_carta2, pib_percapito2 > pib_percapito1);
    printf("Super Poder: Carta 1 - %s vence (%d)\n", cod_carta1, superPoder1 > superPoder2);

    return 0;
}
