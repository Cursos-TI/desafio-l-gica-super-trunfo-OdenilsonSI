#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Definição das variáveis para armazenar as propriedades das cidades
    // Atributo para Carta 1
    char ct1_pais[] = "Brasil";
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
    char ct2_pais[] = "Argentina";
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

    // Menu
    printf("******** OLÁ, BEM VINDO AO SUPER TRUNFO ********\n\n");
    printf("ESCOLHA O PRIMEIRO ATRIBUTO  \n\n");
    printf("1 -> POPULAÇÃO \n");
    printf("2 -> ÁREA \n");
    printf("3 -> PIB \n");
    printf("4 -> NÚMERO DE PONTOS TURÍSTICOS \n");
    printf("5 -> DENSIDADE POPULACIONAL \n\n");

    int primeiro_atributo_escolhido;
    scanf("%d", &primeiro_atributo_escolhido);

    printf("\nAGORA ESCOLHA O SEGUNDO ATRIBUTO (diferente do primeiro)\n\n");

    int segundo_atributo_escolhido;
    scanf("%d", &segundo_atributo_escolhido);

    if (segundo_atributo_escolhido == primeiro_atributo_escolhido)
    {
        printf("\n Você não pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    printf("\n Primeiro atributo escolhido: %d\n", primeiro_atributo_escolhido);
    printf("Segundo atributo escolhido: %d\n\n", segundo_atributo_escolhido);

    // Variáveis para acumular os valores usados na soma
    float valor_ct1_primeiro = 0, valor_ct2_primeiro = 0;
    float valor_ct1_segundo = 0, valor_ct2_segundo = 0;

    // ---------- PRIMEIRO ATRIBUTO ----------
    switch (primeiro_atributo_escolhido)
    {
    case 1: // População
        valor_ct1_primeiro = ct1_populacao;
        valor_ct2_primeiro = ct2_populacao;
        break;
    case 2: // Área
        valor_ct1_primeiro = ct1_area;
        valor_ct2_primeiro = ct2_area;
        break;
    case 3: // PIB
        valor_ct1_primeiro = ct1_pib;
        valor_ct2_primeiro = ct2_pib;
        break;
    case 4: // Pontos turísticos
        valor_ct1_primeiro = ct1_numero_pontos_turismo;
        valor_ct2_primeiro = ct2_numero_pontos_turismo;
        break;
    case 5: // Densidade populacional (invertido → quanto menor, melhor)
        valor_ct1_primeiro = -ct1_densidade_populacional;
        valor_ct2_primeiro = -ct2_densidade_populacional;
        break;
    }

    // ---------- SEGUNDO ATRIBUTO ----------
    switch (segundo_atributo_escolhido)
    {
    case 1: // População
        valor_ct1_segundo = ct1_populacao;
        valor_ct2_segundo = ct2_populacao;
        break;
    case 2: // Área
        valor_ct1_segundo = ct1_area;
        valor_ct2_segundo = ct2_area;
        break;
    case 3: // PIB
        valor_ct1_segundo = ct1_pib;
        valor_ct2_segundo = ct2_pib;
        break;
    case 4: // Pontos turísticos
        valor_ct1_segundo = ct1_numero_pontos_turismo;
        valor_ct2_segundo = ct2_numero_pontos_turismo;
        break;
    case 5: // Densidade populacional (invertido)
        valor_ct1_segundo = -ct1_densidade_populacional;
        valor_ct2_segundo = -ct2_densidade_populacional;
        break;
    }

    // ---------- SOMA DOS ATRIBUTOS ----------
    float soma_ct1 = valor_ct1_primeiro + valor_ct1_segundo;
    float soma_ct2 = valor_ct2_primeiro + valor_ct2_segundo;

    printf("🔹 Soma dos atributos:\n");
    printf("Carta 1 (%s): %.2f\n", ct1_pais, soma_ct1);
    printf("Carta 2 (%s): %.2f\n", ct2_pais, soma_ct2);

    // ---------- RESULTADO FINAL ----------
    (soma_ct1 > soma_ct2) ? printf("\n Resultado final: Carta 1 venceu a rodada!\n") : (soma_ct2 > soma_ct1) ? printf("\n Resultado final: Carta 2 venceu a rodada!\n") : printf("\n Resultado final: Empate!\n");
                                                                                                    

    return 0;
}
