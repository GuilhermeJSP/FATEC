#include <stdio.h>
#include <stdlib.h>
#include "DadosVendedor.h"

extern float CalcComissao(float,float);

void Cabecalho(void)
{
    printf("========= Controle de Vendas Mensais =========\n");
}

void main(void)
{
    DadosVendedor CadVendedor[12];
    float MatFatSetor[3] = {0, 0, 0};
    float Comissao, FatTotal;
    int QtSetor[3] = {0, 0, 0};
    int Cont, QtdForaMeta;

    FatTotal = 0;
    QtdForaMeta = 0;

    Cabecalho();


    for (Cont = 0; Cont < 12; Cont++)
    {
        printf("\nNome do Vendedor: ");
        scanf(" %[^\n]s", CadVendedor[Cont].Nome);

        printf("Setor [1/2/3]: ");
        scanf("%i", &CadVendedor[Cont].Setor);

        printf("Valor de Venda: R$ ");
        scanf("%f", &CadVendedor[Cont].ValVenda);

        printf("Valor da Meta: R$ ");
        scanf("%f", &CadVendedor[Cont].ValMeta);
    }

        system("cls");

        Cabecalho();

    printf("\n----------------------------------------------");
    printf("\nVendedores:\n");
    printf("----------------------------------------------\n");

    for (Cont = 0; Cont < 12; Cont ++)
    {
        Comissao = CalcComissao(CadVendedor[Cont].ValVenda, CadVendedor[Cont].ValMeta);

        MatFatSetor[CadVendedor[Cont].Setor - 1] += CadVendedor[Cont].ValVenda; // calculo do faturamento de cada setor

        QtSetor[CadVendedor[Cont].Setor - 1]++; // quantos vendedores por setor

        FatTotal += CadVendedor[Cont].ValVenda; // soma todas as vendas da loja

        if (CadVendedor[Cont].ValVenda < CadVendedor[Cont].ValMeta) //verifica se não atingiu a meta
            QtdForaMeta++; //soma dos fora da meta

        printf("\nVendedor: %s \nComissao: R$ %.2f\n",CadVendedor[Cont].Nome, Comissao);
    }

    printf("\n----------------------------------------------");
    printf("\nSetores:\n");
    printf("----------------------------------------------\n");

    for (Cont = 0; Cont < 3; Cont++) //saida de informações dos setores
    {
        printf("\nSetor %i:\n", Cont + 1);
        printf("Quantidade de vendedores: %i\n", QtSetor[Cont]);
        printf("Faturamento: R$ %.2f\n", MatFatSetor[Cont]);
    }

    printf("\n----------------------------------------------");
    printf("\n\nFaturamento total da loja: R$ %.2f\n", FatTotal);
    printf("Vendedores fora da meta: %i\n", QtdForaMeta);
    printf("\n----------------------------------------------\n");
    system("pause");
    return 0;
}
