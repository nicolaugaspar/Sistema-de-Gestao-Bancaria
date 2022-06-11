#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include "RegistoMovimentoBancario.c"
#include "InserirContas.c"




void inserircontas(Conta conta[])
{



    for (int i = 0; i < 3; i++)
    {
        printf("\n\t__________________________________Conta Bancária__________________________________________________________\n");

        printf("Digita o id do banco: \n");
        scanf("%d", &conta[i].idBanco);

        printf("Digita o numero da conta bancária:\n");
        scanf(" %s", conta[i].numConta);

        conta[i].saldo = 0;

        printf("digita o saldo \n");
        scanf("%f", &conta[i].saldo);

        printf("conta ativa \n");
        scanf("%d", &conta[i].ativo);

        // system("cls");

        printf("REGISTO CONCLUIDO COM SUCESSO.\n\n");
        printf("\n______________________________________________________________________________________________________________\n");



    }



}

void registarMovimentoBancario(Movimento movimento[])
{


    int i;
    for (i = 0; i < 3; i++)
    {
        printf("\n\t__________________________________Movimento Bancário_____________________________________________________\n");

        printf("\nDigita o id da conta bancária:\n");
        scanf("%d", &movimento[i].idConta);

        printf("digita o valor \n");
        scanf("%f", &movimento[i].valor);

        printf("conta ativa \n");
        scanf("%d", &movimento[i].ativo);


        printf("Coloque data incial do movimento no formato: dia/mes/ano\n");
        scanf("%d/%d/%d", &dia1.dia, &dia1.mes, &dia1.ano);

        printf("Coloque data final do movimento no formato: dia/mes/ano\n");
        scanf("%d/%d/%d", &dia2.dia, &dia2.mes, &dia2.ano);

        printf("O movimento da conta foi : %lu\n", dist_dias(dia1, dia2));


        printf("\n_______________________________________Ativo/Inativo_______________________________________________________________\n");
    }

}
