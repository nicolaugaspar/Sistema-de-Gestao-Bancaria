#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "estrutura.inc"

void registarMovimentoBancario(Movimento movimento[], Conta conta[], int conContas, int* conMov)
{
	int idConta;
	int idMov = *conMov;
	printf(" digita um valor para verificar se a conta esta ativa ");
	scanf(" %d", &idConta);
	if (idConta <= conContas)
	{
		printf("\n\t_______________________Movimento Bancário_____________________\n");
		movimento[idMov].idConta = idConta;
		printf("Digita o valor : ");
		scanf(" %f", &movimento[idMov].valor);
		movimento[idMov].ativo = 1;
		printf("Coloca o ano   : ");
		scanf(" %d", &movimento[idMov].data.ano);
		printf("Coloca o mes   : ");
		scanf(" %d", &movimento[idMov].data.mes);
		printf("Coloca o dia   : ");
		scanf(" %d", &movimento[idMov].data.dia);
		conta[idConta].saldo = conta[idConta].saldo + movimento[idMov].valor;
		printf("\n______________________________________________________________________\n");
		(*conMov)++;
	}

}

void mostrarmovimentobancario(Movimento movimento[], int conMovm)
{
	int i;
	for (i = 0; i <= conMovm; i++)
	{
		printf("\n\t_______________________Monstrar Movimento Bancario _____________________\n");
		printf("id do movimento    : %d\n", movimento[conMovm].idConta);
		printf("valor do movimento : %.2f\n", movimento[conMovm].valor);
		printf("ativo do movimento : %d\n", movimento[conMovm].ativo);
		printf("data de movimento  : %04d/%02d/%02d\n", movimento[i ].data.ano, movimento[i ].data.mes, movimento[i].data.dia);
		//printf("\n\t________________________________________________________________________\n");

	}

}

//Consultar lista de movimentos de uma conta entre datas
void consultaListaMovimentoData(Movimento movimento[], int conMovm)
{
	Data inicio, final;

	printf("\n\t____________________Consulta Movimento  Bancária________________________\n");
	printf("Coloca o ano: ");
	scanf(" %d", &inicio.ano);
	printf("Coloca o mes: ");
	scanf(" %d", &inicio.mes);
	printf("Coloca o dia: ");
	scanf(" %d", &inicio.dia);

	printf("Coloca o ano final: ");
	scanf(" %d", &final.ano);
	printf("Coloca o mes final: ");
	scanf(" %d", &final.mes);
	printf("Coloca o dia final: ");
	scanf(" %d", &final.dia);
	printf("\n\t________________Lista Encontrado de Movimento Bancária____________________\n");

	if ((inicio.ano >= 1900 && inicio.ano <= 2022) && (inicio.mes >= 1 && inicio.mes <= 12) && (inicio.dia >= 1 && inicio.dia <= 31))
	{
		for (int i = 0; i <= conMovm; i++)
		{
			if (movimento[i].data.ano >= inicio.ano) {
				if (movimento[i].data.mes >= inicio.mes) {
					if (movimento[i].data.dia >= inicio.dia) {
						mostrarmovimentobancario(movimento, conMovm);
					}
				}
			}
			if (movimento[i].data.ano >= final.ano) {
				if (movimento[i].data.mes >= final.mes) {
					if (movimento[i].data.dia >= final.dia) {
						mostrarmovimentobancario(movimento, conMovm);
					}
				}
			}
		}

	}
	else
	{
		printf("\nNão há contas registadas.");
	}
	printf("\n________________________________________________________________________________\n");


}

// Consultar contas bancárias e respetivos movimentos
void consultaContaBancariaMovimento(Movimento movimento[], Conta conta[], int contas, int conMovm)
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
	for (i = 0; i <= conMovm; i++)
	{
		printf("\n\t_______________________Monstrar Movimento Bancario _____________________\n");
		printf("id do movimento    : %d\n", movimento[conMovm].idConta);
		printf("valor do movimento : %.2f\n", movimento[conMovm].valor);
		printf("ativo do movimento : %d\n", movimento[conMovm].ativo);
		printf("data de movimento  : %04d/%02d/%02d\n", movimento[i].data.ano, movimento[i].data.mes, movimento[i].data.dia);
		printf("\n\t________________________________________________________________________\n");
	}

}


//9-Alterar movimentos bancários
void alterarMovimentoBancario(Movimento movimento[], Conta conta[], int* idMov)
{
	//int alConta=0;
	int pos = *idMov;

	if (pos == -1)
	{
		printf("\n Não encontrado! ");

	}
	else {
		if (pos == -2)
		{
			printf("\nNome excluido do arquivo!");

		}
		else
		{

			// movimento[pos].idConta = alConta;
			printf("Digita o id da conta movimento : ");
			scanf(" %f", &movimento[pos].idConta);
			printf("Digita o valor : ");
			scanf(" %f", &movimento[pos].valor);
			movimento[pos].ativo = 1;
			printf("Coloca o ano   : ");
			scanf(" %d", &movimento[pos].data.ano);
			printf("Coloca o mes   : ");
			scanf(" %d", &movimento[pos].data.mes);
			printf("Coloca o dia   : ");
			scanf(" %d", &movimento[pos].data.dia);


		}

		printf("Digita o id da conta movimento : ");
		scanf(" %f", &movimento[pos].idConta);
		printf("Digita o valor : ");
		scanf(" %f", &movimento[pos].valor);
		movimento[pos].ativo = 1;
		printf("Coloca o ano   : ");
		scanf(" %d", &movimento[pos].data.ano);
		printf("Coloca o mes   : ");
		scanf(" %d", &movimento[pos].data.mes);
		printf("Coloca o dia   : ");
		scanf(" %d", &movimento[pos].data.dia);

	}

}

void desativarContabancáriaMovimentoElimanda(Conta conta[], int dcont, Movimento movimento[], int econt)
{
	int contax;

	printf(" Digita a conta para disativar");
	scanf(" %d", &contax);
	if (contax <= dcont)
	{
		if (conta[contax].ativo == 1)
		{
			conta[contax].ativo = 0;
			printf("Desativado com sucesso");
			if (movimento[contax].idConta <= contax)
			{
				eliminarBancario(conta, contax);// conta a eliminar
				printf("Elimnado com sucesso");
			}
		}
	}
	else {
		printf("conta não existe");
	}

}

int eliminarBancario(Conta conta[], int econt)
{
	int altera = 0;
	conta[econt].idBanco = altera;
	conta[econt].ativo = altera;
	conta[econt].saldo = altera;
	//conta[dcont].numConta = altera; 
}