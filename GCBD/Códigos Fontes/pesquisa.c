#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "../funcoes.h"

#define N 100

typedef struct pessoa PESSOA;
struct pessoa {
  char cpf[N];   
	char nome[N], rua[N], telefone[11];
  int  idade, nCasa;
};
int existe;
int i;

int pesquisa(int opcaoPesquisa)
{
  FILE *arq;
  PESSOA leitura;  
  PESSOA *ponteiro;
  PESSOA pont;

  int achou;
  char escolha; 

  //Tenta abrir para leitura/escrita/
  arq=fopen("NOMEARQUIVO.bin","r+b");
  if(arq==NULL){ // Se não abriu, tenta criar novo /
    arq = fopen("NOMEARQUIVO.bin","w+b");
    if(arq==NULL){
        fprintf(stderr,"Nao consegui criar %s\n", "NOMEARQUIVO.bin");
        exit(1);
    } 
  }
 
do{

  system("clear");
	printf("\n");
	printf("Como você deseja pesquisar:\n");
	printf("(1) - Nome\n");
	printf("(2) - CPF\n");
	printf("(3) - Nome da rua\n");
	printf("(4) - Numero da casa\n");
	printf("(5) - Idade\n");
	printf("(6) - Telefone\n");
	printf("(7) - Sair\n");
	printf("\nESCOLHA UMA OPÇÃO: ");
	scanf("%d", &opcaoPesquisa);

	switch (opcaoPesquisa) {

//###############  NOME  #################
	case 1:
    do{ 
      printf("\nNome: ");
      
      getchar(); //Faz o fgets nao ler o enter anterior
      fgets(leitura.nome, N, stdin);
      for(i=0; i<N; i++) //Deixa o nome digitado maiusculo
      {
        leitura.nome[i] = toupper(leitura.nome[i]);
      }
      
    //Posiciona no inicio do arquivo /
      rewind(arq);
      achou = 0;

      // Lê até o final, procurando pelo nome /
      while(fread(&pont,sizeof(pont),1,arq)==1 && !feof(arq)){
        if(strcmp(pont.nome,leitura.nome)==0){ //Imprime o cadastro de todo mundo com o mesmo nome
          achou = 1;
          printf("\n------------------------------\n");  
          printf("Nome: %s\n",pont.nome);
          printf("CPF: %s\n",pont.cpf);
          printf("Nome da rua: %s\n",pont.rua);
          printf("Numero da casa: %d\n",pont.nCasa);
          printf("telefone: %s\n",pont.telefone);
          printf("\n------------------------------\n");
        }
      }
      
      if(achou==0){ //Nao ha pessoa com esse nome
          system("clear");
          printf("\n---------\n");
          printf("\nSem correspondencia\n");
          printf("\n---------\n");
      }
     
    salto1:
      printf("\n------------------------------\n");
      printf(" \nPesquisar de novo por nome? [S/N]: ");
      scanf("\n%c",&escolha);
      printf("\n------------------------------\n");
    
     if(toupper(escolha) != 'S' && toupper(escolha) != 'N'){
     goto salto1; //loop se digitar algo diferente
     } 

    }while(toupper(escolha)=='S');     
  	
    break;


//################## CPF #####################

	case 2:

	do{ 
      printf("\nCPF: ");
      scanf( "%s", leitura.cpf);
      
    //Posiciona no inicio do arquivo /
      rewind(arq);
      achou = 0;

      // Lê até o final, procurando pelo cpf /
      while(fread(&pont,sizeof(pont),1,arq)==1 && !feof(arq)){
        if(strcmp(pont.cpf,leitura.cpf)==0){ //Encontra a pessoa com o cpf digitado
          achou = 1;
          break;
        }
      }
      
      if(achou==0){ //Se nao encontrar o cpf digitado imprime
          system("clear");
          printf("\n---------\n");
          printf("\nSem correspondencia\n");
          printf("\n---------\n");
      }
      else{ //Imprime o cadastro da pessoa com o cpf digitado
          printf("\n------------------------------\n"); 
          printf("Nome: %s\n",pont.nome);
          printf("CPF: %s\n",pont.cpf);
          printf("Nome da rua: %s\n",pont.rua);
          printf("Numero da casa: %d\n",pont.nCasa);
          printf("telefone: %s\n",pont.telefone);
          printf("\n------------------------------\n");
      }

    salto2:
    printf("\n------------------------------\n");
    printf(" \nPesquisar de novo por cpf? [S/N]: ");
    scanf("\n%c",&escolha);
    printf("\n------------------------------\n");
  
     if(toupper(escolha) != 'S' && toupper(escolha) != 'N'){
     goto salto2; //loop se digitar algo diferente
     }

    }while(toupper(escolha)=='S');     
  	   
    break;


//########### Nome da Rua ####################

	case 3:

		do{ 
      printf("\nNome da Rua: ");
      getchar();
      fgets(leitura.rua, N, stdin);
      for(i=0; i<N; i++) //Deixa o nome da rua digitado maiusculo
      {
        leitura.rua[i] = toupper(leitura.rua[i]);
      }
      
    //Posiciona no inicio do arquivo 
      rewind(arq);
      achou = 0;

      // Lê até o final, procurando pelo nome da rua
      while(fread(&pont,sizeof(pont),1,arq)==1 && !feof(arq)){
        if(strcmp(pont.rua,leitura.rua)==0){
          achou = 1;
          //Imprime o cadastro de todo mundo com o mesmo nome da rua
          printf("\n------------------------------\n"); 
          printf("Nome: %s\n",pont.nome);
          printf("CPF: %s\n",pont.cpf);
          printf("Nome da rua: %s\n",pont.rua);
          printf("Numero da casa: %d\n",pont.nCasa);
          printf("telefone: %s\n",pont.telefone);
          printf("\n------------------------------\n");
        }
      }
      
      if(achou==0){ //Se nao encontrar o nome da rua digitado imprime
          system("clear");
          printf("\n---------\n");
          printf("\nSem correspondencia\n");
          printf("\n---------\n");
      }
        
    salto3:
    printf("\n------------------------------\n");
    printf(" \nPesquisar de novo por rua? [S/N]: ");
    scanf("\n%c",&escolha);
    printf("\n------------------------------\n");
  
    if(toupper(escolha) != 'S' && toupper(escolha) != 'N'){
     goto salto3; //loop de digitar algo diferente
    }
    }while(toupper(escolha)=='S');     
  
		break;


//##############  Numero da Casa  ##################

case 4:
  
	do{ 
      printf("\nNumero da Casa: ");
      scanf( "%d", &leitura.nCasa);
      
    //Posiciona no inicio do arquivo 
      rewind(arq);
      achou = 0;

      // Lê até o final, procurando pelo numero da casa digitado
      while(fread(&pont,sizeof(pont),1,arq)==1 && !feof(arq)){
        if(pont.nCasa==leitura.nCasa){
          achou = 1;
          //Imprime o cadastro de todo mundo com o mesmo numero da casa
          printf("\n------------------------------\n");  
          printf("Nome: %s\n",pont.nome);
          printf("CPF: %s\n",pont.cpf);
          printf("Nome da rua: %s\n",pont.rua);
          printf("Numero da casa: %d\n",pont.nCasa);
          printf("telefone: %s\n",pont.telefone);
          printf("\n------------------------------\n");
        }
      }
      
      if(achou==0){ //Se nao encontrar o nome da rua digitado imprime
          system("clear");
          printf("\n---------\n");
          printf("\nSem correspondencia\n");
          printf("\n---------\n");
      }

    salto4:
    printf("\n------------------------------\n");
    printf(" \nPesquisar de novo por Numero da casa? [S/N]: ");
    scanf("\n%c",&escolha);
    printf("\n------------------------------\n");
  
    if(toupper(escolha) != 'S' && toupper(escolha) != 'N'){
     goto salto4; //loop se digitar algo diferente
    }
    }while(toupper(escolha)=='S');     

		break;


//################### Idade #########################

	case 5:
  	do{ 
      printf("\nIdade: ");
      scanf( "%d", &leitura.idade);
      
    //Posiciona no inicio do arquivo /
      rewind(arq);
      achou = 0;

      // Lê até o final, procurando pela data /
      while(fread(&pont,sizeof(pont),1,arq)==1 && !feof(arq)){
        if(pont.idade==leitura.idade){
          achou = 1;
          //Imprime o cadastro de todo mundo com a mesma idade
          printf("\n------------------------------\n"); 
          printf("Nome: %s\n",pont.nome);
          printf("CPF: %s\n",pont.cpf);
          printf("Nome da rua: %s\n",pont.rua);
          printf("Numero da casa: %d\n",pont.nCasa);
          printf("telefone: %s\n",pont.telefone);
          printf("\n------------------------------\n");

        }
      }
      
      if(achou==0){ //Se nao encontrar a idade digitada imprime
          system("clear");
          printf("\n---------\n");
          printf("\nSem correspondencia\n");
          printf("\n---------\n");
      }
      
    salto5:
    printf("\n------------------------------\n");
    printf(" \nPesquisar de novo por Idade? [S/N]: ");
    scanf("\n%c",&escolha); 
    printf("\n------------------------------\n");
  
    if(toupper(escolha) != 'S' && toupper(escolha) != 'N'){
     goto salto5; //loop se digitar algo diferente
    }
    }while(toupper(escolha)=='S');     

		break;


//############### Telefone ###################

  case 6:
    do{ 
        printf("\nTelefone: ");
        scanf( "%s", leitura.telefone);
        
      //Posiciona no inicio do arquivo /
        rewind(arq);
        achou = 0;

        // Lê até o final, procurando pela data /
        while(fread(&pont,sizeof(pont),1,arq)==1 && !feof(arq)){
          if(strcmp(pont.telefone,leitura.telefone)==0){
            achou = 1;
            //Imprime o cadastro de todo mundo com o mesmo telefone
            printf("\n------------------------------\n");  
            printf("Nome: %s\n",pont.nome);
            printf("CPF: %s\n",pont.cpf);
            printf("Nome da rua: %s\n",pont.rua);
            printf("Numero da casa: %d\n",pont.nCasa);
            printf("telefone: %s\n",pont.telefone);
            printf("\n------------------------------\n");
          }
        }
        
        if(achou==0){ //Se nao encontrar o telefone digitado imprime
            system("clear");
            printf("\n---------\n");
            printf("\nSem correspondencia\n");
            printf("\n---------\n");
        }

      salto6:
      printf("\n------------------------------\n");
      printf(" \nPesquisar de novo por Telefone? [S/N]: ");
      scanf("\n%c",&escolha);
      printf("\n------------------------------\n");
    
      if(toupper(escolha) != 'S' && toupper(escolha) != 'N'){
      goto salto6; //loop se digitar algo diferente
      }
      }while(toupper(escolha)=='S');     
    
      break;

//############  Fim  ################

	case 7:
    goto fim; // vai para a linha 369
		break;

//####################################################

	default:
		printf("Opção Inválida");
	}

  salto7:
  printf("\n------------------------------\n");
  printf(" \nPesquisar de novo por outro metodo? [S/N]: ");
  scanf("\n%c",&escolha);
  printf("\n------------------------------\n");
  if(toupper(escolha) != 'S' && toupper(escolha) != 'N'){
      goto salto7; //loop se digitar algo diferente
      }

}while(toupper(escolha)=='S');
  
  fim: // Atalho com o goto
  fclose(arq);   
  return achou; 
}