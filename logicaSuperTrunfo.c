#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char estado[3];         // Ex: "SP"
    char codigo[5];         // Ex: "SP01"
    char nome[50];          // Ex: "São Paulo"
    int populacao;          // Em habitantes
    float area;             // Em km²
    float pib;              // Em bilhões
    int pontos_turisticos;  // Quantidade
    float densidade;        // Calculada: populacao / area
    float pib_per_capita;   // Calculada: pib / populacao
} Carta;

int main() {
    // Declaração das duas cartas
    Carta carta1, carta2;

    // Cadastro da Carta 1 - São Paulo
    strcpy(carta1.estado, "SP");
    strcpy(carta1.codigo, "SP01");
    strcpy(carta1.nome, "São Paulo");
    carta1.populacao = 12300000;
    carta1.area = 1521.11;
    carta1.pib = 699.3;
    carta1.pontos_turisticos = 15;
    carta1.densidade = (float)carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / (carta1.populacao / 1000000.0); // PIB em bilhões, população em milhões

    // Cadastro da Carta 2 - Rio de Janeiro
    strcpy(carta2.estado, "RJ");
    strcpy(carta2.codigo, "RJ01");
    strcpy(carta2.nome, "Rio de Janeiro");
    carta2.populacao = 6000000;
    carta2.area = 1200.0;
    carta2.pib = 337.6;
    carta2.pontos_turisticos = 10;
    carta2.densidade = (float)carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / (carta2.populacao / 1000000.0);

    // Exibição dos dados das cartas
    printf("Carta 1 - %s (%s):\n", carta1.nome, carta1.estado);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade: %.2f hab/km²\nPIB per capita: %.2f\n\n",
           carta1.populacao, carta1.area, carta1.pib, carta1.pontos_turisticos, carta1.densidade, carta1.pib_per_capita);

    printf("Carta 2 - %s (%s):\n", carta2.nome, carta2.estado);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade: %.2f hab/km²\nPIB per capita: %.2f\n\n",
           carta2.populacao, carta2.area, carta2.pib, carta2.pontos_turisticos, carta2.densidade, carta2.pib_per_capita);

    // Comparação pelo atributo População (fixo no código)
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %d\n", carta1.nome, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d\n", carta2.nome, carta2.estado, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
