#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>




int menu()
{
    int escolha;
  
    printf("\n___________________________MENU_________________________________\n");
    system("color B");
    printf("|1-Inserir contas banc�rias\n");
    printf("|2-Registar movimentos banc�rios.\n");
    printf("|3-Consultar lista contas(todas contas)\n");
    printf("|4-Consultar lista de movimentos(todos movimentos)\n");
    printf("|5-Consultar lista de movimentos de uma conta entre datas\n");
    printf("|6-Consultar contas banc�rias e respetivos movimentos():\n");
    printf("|7-Desativar conta banc�ria(se n�o tiver movimento � elimanda):\n");
    printf("|8-Eliminar movimentos banc�rios:\n");
    printf("|9-Alterar movimentos banc�rios\n");
    printf("|10-Backup e restauro de dados\n");
    printf("|0 - Sair.");
    printf("\n___________________________________________________________________\n");
    printf("\n Escolha uma op��o: ");
    scanf("%d", &escolha);

    return escolha;

   
    
}