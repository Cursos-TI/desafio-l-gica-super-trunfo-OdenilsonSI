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

    printf("******** AS CARTAS SÃO FORMADAS POR CIDADES E SEUS ATRIBUTOS ********\n\n");

    printf("******** CADA CARTA POSSUI OS SEGUINTES ATRIBUTOS ********:\n");
    printf("---------> PAÍS\n");
    printf("---------> POPULAÇÃO\n");
    printf("---------> ÁREA\n");
    printf("---------> PIB\n");
    printf("---------> NÚMERO DE PONTOS TURÍSTICOS\n");
    printf("---------> DENSIDADE POPULACIONAL \n\n");

    printf("******************** REGRAS ********************\n\n");
    printf("CADA ATRIBUTO POSSUI UM VALOR, E O JOGADOR DEVE ESCOLHER UM ATRIBUTO PARA COMPARAÇÃO\n\n");

    printf("O JOGADOR QUE POSSUI O MAIOR VALOR NO ATRIBUTO ESCOLHIDO, VENCE A RODADA, EXCETO O ATRIBUTO DE DENSIDADE POPULACIONAL\n\n");

    printf("BOA SORTE E BOM JOGO!\n\n");

    printf("ESCOLHA UM ATRIBUTO \n\n");
    printf("1 -> PAÍS \n\n");
    printf("2 -> POPULAÇÃO \n\n");
    printf("3 -> ÁREA \n\n");
    printf("4 -> PIB \n\n");
    printf("5 -> NÚMERO DE PONTOS TURÍSTICOS \n\n");
    printf("6 -> DENSIDADE POPULACIONAL \n\n");
    int atributo_escolhido;
    scanf("%d", &atributo_escolhido);

    // printf("O ATRIBUTO ESCOLHIDO FOI %d\n", atributo_escolhido);

    switch (atributo_escolhido)
    {

    case 1:
        printf("VOCÊ ESCOLHEU O ATRIBUTO 1. ESSE ATRIBUTO APENAS EXIBE O NOME DOS PAÍSES\n");
        printf("O PAIS DA CARTA 1 É %s \n", ct1_pais);
        printf("O PAIS DA CARTA 2 É %s \n", ct2_pais);
        break;

    case 2:
        printf("VOCÊ ESCOLHEU O ATRIBUTO 2 QUE REPRESENTA A POPULAÇÃO\n");
        printf("O PAÍS DA CARTA 1 É %s, SUA POPULAÇÃO É %d\n", ct1_pais, ct1_populacao);
        printf("O PAÍS DA CARTA 2 É %s, SUA POPULAÇÃO É %d\n", ct2_pais, ct2_populacao);

        if (ct1_populacao > ct2_populacao)
        {
            printf("A CARTA 1 VENCEU ESSA RODADA \n");
        }
        else if (ct1_populacao < ct2_populacao)
        {
            printf("A CARTA 2 VENCEU ESSA RODADA \n");
        }
        else
        {
            printf("ESSA RODADA EMPATOU, POIS OS VALORES SÃO IGUAIS\n");
        }
        break;

    case 3:
        printf("VOCÊ ESCOLHEU O ATRIBUTO 3 QUE REPRESENTA A ÁREA\n");
        printf("O PAÍS DA CARTA 1 É %s, SUA ÁREA É %.2f \n", ct1_pais, ct1_area);
        printf("O PAÍS DA CARTA 2 É %s, SUA ÁREA É %.2f \n", ct2_pais, ct2_area);

        if (ct1_area > ct2_area)
        {
            printf("A CARTA 1 VENCEU ESSA RODADA \n");
        }
        else if (ct1_area < ct2_area)
        {
            printf("A CARTA 2 VENCEU ESSA RODADA \n");
        }
        else
        {
            printf("ESSA RODADA EMPATOU, POIS OS VALORES SÃO IGUAIS\n");
        }
        break;

    case 4:
        printf("VOCÊ ESCOLHEU O ATRIBUTO 4 QUE REPRESENTA O PIB\n");
        printf("O país da carta 1 é %s, seu PIB é %.2f \n", ct1_pais, ct1_pib_per_capita);
        printf("O país da carta 2 é %s, seu PIB é %.2f \n", ct2_pais, ct2_pib_per_capita);

        if (ct1_pib_per_capita > ct2_pib_per_capita)
        {
            printf("A CARTA 1 VENCEU ESSA RODADA \n");
        }
        else if (ct1_pib_per_capita < ct2_pib_per_capita)
        {
            printf("A CARTA 2 VENCEU ESSA RODADA \n");
        }
        else
        {
            printf("ESSA RODADA EMPATOU, POIS OS VALORES SÃO IGUAIS\n");
        }
        break;

    case 5:
        printf("VOCÊ ESCOLHEU O ATRIBUTO 5 QUE REPRESENTA O NÚMERO DE PONTOS TURÍSTICOS\n");
        printf("O PAÍS DA CARTA 1 É %s, SEUS PONTOS TURÍSTICOS SÃO %d \n", ct1_pais, ct1_numero_pontos_turismo);
        printf("O PAÍS DA CARTA 2 É %s, SEUS PONTOS TURÍSTICOS SÃO %d \n", ct2_pais, ct2_numero_pontos_turismo);

        if (ct1_numero_pontos_turismo > ct2_numero_pontos_turismo)
        {
            printf("A CARTA 1 VENCEU ESSA RODADA \n");
        }
        else if (ct1_numero_pontos_turismo < ct2_numero_pontos_turismo)
        {
            printf("A CARTA 2 VENCEU ESSA RODADA \n");
        }
        else
        {
            printf("ESSA RODADA EMPATOU, POIS OS VALORES SÃO IGUAIS\n");
        }
        break;

    case 6:
        printf("VOCÊ ESCOLHEU O ATRIBUTO 6 QUE REPRESENTA A DENSIDADE POPULACIONAL\n");
        printf("O PAÍS DA CARTA 1 É %s, SUA DENSIDADE POPULACIONAL É %.2f \n", ct1_pais, ct1_densidade_populacional);
        printf("O PAÍS DA CARTA 2 É %s, SUA DENSIDADE POPULACIONAL É %.2f \n", ct2_pais, ct2_densidade_populacional);

        if (ct1_densidade_populacional < ct2_densidade_populacional)
        {
            printf("A CARTA 1 VENCEU ESSA RODADA \n");
        }
        else if (ct1_densidade_populacional > ct2_densidade_populacional)
        {
            printf("A CARTA 2 VENCEU ESSA RODADA \n");
        }
        else
        {
            printf("ESSA RODADA EMPATOU, POIS OS VALORES SÃO IGUAIS\n");
        }
        break;

    default:
        printf("VOCÊ ESCOLHEU UMA OPÇÃO INVÁLIDA, POR FAVOR TENTE NOVAMENTE INFORMANDO UM VALOR ENTRE 1 E 6\n");
    }
}
