
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../funcoes.h"

//IMPLEMENTACAO DA FUNCAO INICIALIZACAO

void cabecalho(){

  printf("\n\n\n******* Pressione enter para continuar *******\n");
  getchar();
  system("clear");
  
  printf("\n    |________|___________________|_");
  printf("\n    |        | | | | | | | | | | | |________________");
  printf("\n    |________|___________________|_|                ,");
  printf("\n    |        |                   |                  ,");
printf("\n\n");
printf("\n\n");

printf("\n******************************************\n");
printf("           CADASTRO DE VACINACAO           \n");
printf("******************************************\n");

}

void inicializacao(){

  printf("\n\n\n******* Equipe *******\n");
  printf("\nAuro Gabriel Carvalho de Aramides- 507803\n");
  printf("\nPaulo Victor Pereira Lima - 509612\n");
  printf("\nTainan Sousa Viana - 511793\n");
  printf("\nDavi Chaves Gomes - 509525\n");
  printf("\nCaio Vitor Pinheiro de Sousa - 511764\n");

int opcao;
do{

cabecalho();
printf("\n"); 
printf("(1) - Inserir\n"); //Adiciona um novo cadastro
printf("(2) - Remover\n"); //Remove um cadastro
printf("(3) - Mostrar lista completa\n"); //Apresenta a lista
printf("(4) - Pesquisar\n"); //Pesquisa por um cadastro
printf("(5) - Sair\n"); //Fecha o programa
printf("\nESCOLHA UMA OPERACAO A SER REALIZADA: ");
scanf("%d", &opcao);

switch(opcao){

// OPÇÃO 1 - INSERIR 
case 1:
inserir(); 
break;

// OPÇÃO 2 - REMOVER 
case 2:
remover(); 
break;

// OPÇÃO 3 - IMPRIMIR TODOS OS CADASTROS
case 3:
impressao();
break;

// OPÇÃO 4 - PESQUISAR
case 4:
pesquisa(); 
break;

// OPÇÃO 5 - SAIR
case 5:
printf("\n\n******** Operacao finalizada. *********\n\n"); 
break;

default: printf("\nOpção Inválida.\n");
getchar();
  
break; 
}

} while( opcao != 5); 

}

