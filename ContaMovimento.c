
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "InserirContas.c"
#include "RegistoMovimentoBancario.c"
#include "data.c"



//Consultar lista de movimentos de uma conta entre datas

void consultarMovimentoBancario(Movimento contamovimentoconsulta[], Conta contdata[])
{
    int pesquisar, dia=0,mes=0,ano=0;
   
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)

            if (dia1.dia == dia || dia1.mes == mes || &dia1.ano == ano)
            {
               

 
        printf("\n\t__________________________________Consultar Movimento Bancário entre Data_____________________________________________________\n");

                printf("\nDigita o id da conta bancária:\n");
                scanf("%d", &contamovimentoconsulta[i].idConta);

                printf("digita o valor \n");
                scanf("%f", &contamovimentoconsulta[i].valor);

                printf("conta ativa \n");
                scanf("%d", &contamovimentoconsulta[i].ativo);


                printf("Digita o id do banco: \n");
                scanf("%d", &contdata[i].idBanco);

                printf("Digita o numero da conta bancária:\n");
                scanf(" %s", contdata[i].numConta);

                contdata[i].saldo = 0;

                printf("digita o saldo \n");
                scanf("%f", &contdata[i].saldo);

                printf("conta ativa \n");
                scanf("%d", &contdata[i].ativo);
        void inserircontas(Conta conta[]);


               /* printf("Coloque data incial do movimento no formato: dia/mes/ano\n");
                scanf("%d/%d/%d", &dia1.dia, &dia1.mes, &dia1.ano);

                printf("Coloque data final do movimento no formato: dia/mes/ano\n");
                scanf("%d/%d/%d", &dia2.dia, &dia2.mes, &dia2.ano);

                printf("O movimento da conta foi : %lu\n", dist_dias(dia1, dia2));*/
               printf("\n_______________________________________Ativo/Inativo_______________________________________________________________\n");
            }

}

