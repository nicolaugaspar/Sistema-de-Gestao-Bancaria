#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "RegistoMovimentoBancario.h"

#define NC 10
#define NM 1000

    void valorSwitch() 
    {
        Conta conta[NC];
        Movimento movimento[NM];
  
        int valor,nConta=0, nMov=0,conMov=0,mov=0, conMovm=0, movcontas=0, idMov=0, alMov=0, dcont=0;
        

        do
        {

            valor = menu();
            switch (valor)
            {
                case 1:
                    inserircontas(conta, &nConta);
                    break;
                case 2:
                   registarMovimentoBancario(movimento, conta, nConta, &nMov);
                  
                    break;

                case 3:
                    mostrarconta(conta, nConta);
                    break;

                case 4:
                    mostrarmovimentobancario(movimento,  conMovm);
                     break;

                case 5:
                consultaListaMovimentoData(movimento, conMovm);
                     break;

                case 6:
                    consultaContaBancariaMovimento(movimento,  conta, nConta,  conMovm);
                    break;
                case 7:
                    desativarContabancáriaMovimentoElimanda(conta,dcont,movimento,conMov);
                    break;

                case 8:
                   // eliminarBancario(conta,dcont);
                    break;

                case 9:
                alterarMovimentoBancario(movimento,  conta,  &alMov);
                    break;
                default:
                    printf("Não existe nunhuma opção ");
                    break;
            }

        } while (valor != 0);

    }