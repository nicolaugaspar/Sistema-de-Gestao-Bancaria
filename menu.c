#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>




int menu()
{
    int escolha;
  
    printf("\n___________________________MENU_________________________________\n");
    system("color B");
    printf("|1-Inserir contas bancárias\n");
    printf("|2-Registar movimentos bancários.\n");
    printf("|3-Consultar lista contas(todas contas)\n");
    printf("|4-Consultar lista de movimentos(todos movimentos)\n");
    printf("|5-Consultar lista de movimentos de uma conta entre datas\n");
    printf("|6-Consultar contas bancárias e respetivos movimentos():\n");
    printf("|7-Desativar conta bancária(se não tiver movimento é elimanda):\n");
    printf("|8-Eliminar movimentos bancários:\n");
    printf("|9-Alterar movimentos bancários\n");
    printf("|10-Backup e restauro de dados\n");
    printf("|0 - Sair.");
    printf("\n___________________________________________________________________\n");
    printf("\n Escolha uma opção: ");
    scanf("%d", &escolha);

    return escolha;

   
    
}