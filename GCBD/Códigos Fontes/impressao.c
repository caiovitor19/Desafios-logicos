#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "../funcoes.h"
#define N 100

struct pessoa {
  char cpf[N];   
	char nome[N], rua[N], telefone[11];
  int idade, nCasa;
};

void impressao(){
   
    FILE *fp1;
    struct pessoa s1;

    printf("\n\n\n******** CADASTROS EXISTENTES ********\n");

    /*Tenta abrir o arquivo original para leitura*/
    fp1 = fopen("NOMEARQUIVO.bin","r+b");
    if(fp1 == NULL){
        fprintf(stderr,"Nao consegui abrir %s\n", "NOMEARQUIVO.bin");
        exit(1);
    }

   if(fp1 != NULL){
      printf("\n"); 
    while(fread(&s1,sizeof(s1),1,fp1)==1 && !feof(fp1)){
        printf("\nNome: %s", s1.nome);
        printf("CPF: %s", s1.cpf);
        printf("\nNome da rua: %s", s1.rua);
        printf("Telefone: %s", s1.telefone);
        printf("\nIdade: %d", s1.idade);
        printf("\nN° da casa: %d", s1.nCasa);
        printf("\n--------------------\n"); 
        
    }
   } 

fclose(fp1);
getchar();
}
