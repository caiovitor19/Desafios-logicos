#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../funcoes.h"

typedef struct pessoa PESSOA;
#define N 100
int i;

struct pessoa {
  char cpf[N];   
	char nome[N] , rua[N], telefone[11];
  int idade, nCasa;
};


void inserir()
{
  FILE *arq;

 // Criando ponteiros para armazenar os dados
  PESSOA leitura;
  PESSOA ponteiro;
  
  
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
      printf("\nCPF: ");
      scanf( "%s", leitura.cpf);

        //Posiciona no inicio do arquivo 

      rewind(arq);
      achou = 0;

      // Lê até o final, procurando pelo cpf digitado 
      while(fread(&ponteiro,sizeof(ponteiro),1,arq)==1 && !feof(arq)){
        if(strcmp(ponteiro.cpf,leitura.cpf)==0){
          achou = 1;
          break;
        }
      }

      if(achou==0){

        printf("Nome : ");
        getchar(); //Faz o programa nao ler o enter
        fgets(leitura.nome, N, stdin); //Armazena o nome
        for(i=0; i<N; i++)//Deixa tudo maiusculo
        {
          leitura.nome[i] = toupper(leitura.nome[i]);
        }
        

        printf("Nome da rua : ");
        fgets(leitura.rua, N, stdin); //Armazena o nome da rua
        for(i=0; i<N; i++)//Deixa tudo maiusculo
        {
          leitura.rua[i] = toupper(leitura.rua[i]);
        }

        printf("N° da casa : ");
        scanf( "%d", &leitura.nCasa);

        printf("Idade : ");
        scanf( "%d", &leitura.idade);

        printf("Telefone : ");
        scanf( "%s", leitura.telefone);

        ponteiro=leitura;    
        // Posiciona o cursor no final do arquivo 
        fseek(arq,0,SEEK_END);

        // Inclui novo registro 
        fwrite(&ponteiro,sizeof(ponteiro),1,arq);
      }
      else{
         printf("\nCPF ja cadastrado!\n"); 

      }
      printf(" \nContinuar modo inserir? [S/N]: ");
      scanf("\n%c",&escolha);
      
   }while(toupper(escolha)=='S');     

  fclose(arq);   
  
}
