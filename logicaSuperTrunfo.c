#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Atributo para Carta 1
    char ct1_estado[] = "MA";
    char ct1_codigo[] = "MA123";
    char ct1_cidade[] = "São Luís";
    int ct1_populacao = 2000;
    float ct1_area = 100.5;
    float ct1_pib = 5000.0;
    int ct1_numero_pontos_turismo = 10;

    // calculo para densidade populacional
    float ct1_densidade_populacional = ct1_populacao / ct1_area;
   
    // calculo para pib per capita
    float ct1_pib_per_capita = ct1_pib / ct1_populacao;

    // Atributo para Carta 2
    char ct2_estado[] = "RJ";
    char ct2_codigo[] = "RJ456";
    char ct2_cidade[] = "Rio de Janeiro";
    int ct2_populacao = 2000;
    float ct2_area = 200.5;
    float ct2_pib = 10000.0;
    int ct2_numero_pontos_turismo = 20;

    // calculo para densidade populacional
    float ct2_densidade_populacional = ct2_populacao / ct2_area;
    
    // calculo para pib per capita
    float ct2_pib_per_capita = ct2_pib / ct2_populacao;

    //saidas
    printf("----- O atributo escolhido para comparacao eh a densidade populacional --------\n");
    printf(" -> A densidade populacional da carta 1 eh %f\n", ct1_densidade_populacional);
    printf(" -> O pib per capita da carta 1 eh %f\n", ct1_pib_per_capita);
    printf(" -> A densidade populacional da carta 2 eh %f\n", ct2_densidade_populacional);
    printf(" -> O pib per capita da carta 2 eh %f\n", ct2_pib_per_capita);

    // Comparação de Atributos usando estrutura condicional composta
    if (ct1_densidade_populacional < ct2_densidade_populacional)
    {
        printf(" -> A carta 1 venceu na densidade populacional\n");
    }
    else
    {
        printf(" -> A carta 2 venceu na densidade populacional\n");
    }
}
