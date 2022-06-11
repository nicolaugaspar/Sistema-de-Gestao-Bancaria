#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
//#include "estrutura.inc"
#include "RegistoMovimentoBancario.h"


 
void inserircontas(Conta conta[], int* conContas)
    {
        int i = *conContas;
            printf("\n\t______________Conta Bancária_________________\n");
            printf("Digita o id do banco             : ");
            scanf(" %d", &conta[i].idBanco);
            printf("Digita o numero da conta bancária: ");
            scanf(" %s", conta[i].numConta);
            conta[i].saldo = 0;
            conta[i].ativo = 1;
            printf("REGISTO CONCLUIDO COM SUCESSO.\n\n");
            printf("\n____________________________________________________\n");
            (*conContas)++;
    }

    /*esta função serve para  exibir  as  contas */
    void mostrarconta(Conta conta[], int contas)
    {
        int i;
        for (i = 0; i < contas; i++)
        {
            printf("\n\t________________Monstrar Conta Bancária________________\n");
            printf("id do banco   : %d \n", conta[i].idBanco);
            printf("conta bancária: %s\n", conta[i].numConta);
            printf("saldo         : %.2f\n", conta[i].saldo);
            printf("conta ativa   : %d\n", conta[i].ativo);
            printf("\n___________________________________________________________\n");
        }
    }


   