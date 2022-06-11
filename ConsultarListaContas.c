/*  #define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string.h>
//#include "InserirContas.c"




consultaListaConta(Conta consulta[]) {

    int i, idbanco,ativo;
    float saldo;
    char  numconta[30];

    
    for (i = 0; i < 1; i++)
    {
        printf("\n\t__________________________________Consulta Conta Bancária________________________________________________\n");
        printf("\n\tDigita o numero da conta bancária:\n");
        scanf(" %s", numconta);

        printf("Digita o id do banco: \n");
        scanf("%d", &idbanco);

        printf("digita o saldo \n");
        scanf("%f", &saldo);

        printf("conta ativa \n");
        scanf("%d", &ativo);

        if (consulta[i].numConta == numconta || consulta[i].idBanco == idbanco || consulta[i].saldo== saldo || consulta[i].ativo==ativo)
        {
            printf("\nnumero da conta encontrado: %s", consulta[i].numConta);
            printf("\nid do banco encontrado: %d", consulta[i].idBanco);
            printf("\n saldo encontrado %f", consulta[i].saldo);
            printf("\nativo encontrado: %d: lugar", consulta[i].ativo);
        }
        else
        {
            printf("conta não encontrado");
        }
        printf("\n______________________________________________________________________________________________________\n");
    }


}*/