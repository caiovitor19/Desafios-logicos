#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "../funcoes.h"

#define N 100
int i;

struct pessoa {
  char cpf[N];   
	char nome[N] , rua[N], telefone[11];
  int idade, nCasa;
};

void remover(){
    /*ponteiros que irao auxiliar na remocao*/
    FILE *fp1, *fp2;
    struct pessoa ponteiro;
    struct pessoa leitor;
    char CPF[N];
    char escolha;
    int existe;
    int opcaoRemov;
    
    do{

        system("clear");
        printf("\n");
        printf("A partir de que voce deseja remover?\n");
        printf("(1) - Nome\n");
        printf("(2) - CPF\n");
        printf("(3) - Nome da rua\n");
        printf("(4) - Idade\n");
        printf("(5) - Sair\n");
        printf("\nESCOLHA UMA OPCAO: ");
        scanf("%d", &opcaoRemov);

	switch (opcaoRemov) {


//###############  NOME  ###############
	case 1:
    do{ 

      printf("\nInsira o nome da pessoa a ser removida:");
      getchar();
      fgets(leitor.nome, N, stdin);
      for(i=0; i<N; i++)
      {
        leitor.nome[i] = toupper(leitor.nome[i]);
      }

      /*Tenta abrir o arquivo original para leitura/escrita*/
      fp1 = fopen("NOMEARQUIVO.bin","r+b");
      if(fp1 == NULL){
          fprintf(stderr,"Nao consegui abrir %s\n", "NOMEARQUIVO.bin");
          exit(1);
      } 
      /*o arquivo "reserva.bin" vai receber os dados do arquivo original que não serao removidos*/
      /*Acrescenta dados ou cria uma arquivo binario para leitura e escrita*/
      fp2 = fopen("reserva.bin", "a+b");
      if(fp2 == NULL){
          printf("\nProblema de memoria para realizar a remocao\n");
          exit(1);
      } 
      /*a variavel abaixo serve para verificar se o nome indicado pelo usuario, esta mesmo cadastrado, pois se nao estiver, o programa deve avisar isso e evitar perda de tempo*/
      existe = 0;
      while(fread(&ponteiro,sizeof(ponteiro),1,fp1)==1 && !feof(fp1)){
           if(strcmp(ponteiro.nome,leitor.nome)==0 ){
              existe ++; //
            }
      }
      /*Se houver alguem com o mesmo nome indicado pelo usuario, os dados do arquivo apontado pelo ponteiro fp1 são passados para uma struct*/
      if(existe == 1){
      while(fread(&ponteiro,sizeof(ponteiro),1,fp1)==1 && !feof(fp1)){
           /*a struct ponteiro é usada para achar, no arquivo original, o nome indicado pelo usuario. Quando achar, todos os dados dessa pessoa, incluindo o nome, nao serao copiados para o arquivo "reserva.bin"*/
           
           if(strcmp(ponteiro.nome,leitor.nome)==0){   }
           else{
            fwrite(&ponteiro,sizeof(ponteiro),1,fp2);}
      }
        printf("\n-----Removendo o seguinte cadastro-----\n");  
            printf("Nome: %s\n",ponteiro.nome);
            printf("CPF: %s\n",ponteiro.cpf);
            printf("Endereco: %s\n",ponteiro.rua);
            printf("telefone: %s\n",ponteiro.telefone);
            printf("telefone: %d\n",ponteiro.nCasa);
            printf("\n------------------------\n");
      /*liberacao dos ponteiros*/
      fclose(fp1);
      fclose(fp2);
      /*arquivo original e apagado*/
      remove("NOMEARQUIVO.bin");
      /*reserva.bin passa a ter o nome do arquivo original*/
      rename("reserva.bin", "NOMEARQUIVO.bin");
      printf("\nRemoção realizada com sucesso\n");
      }
      //tratamento de erro
      else if(existe > 1){
        printf("\nExiste mais de um com esse nome, tente por CPF\n");
      }

      if(existe == 0){
        printf("\nNao existe pessoa cadastrada com esse Nome\n"); 
      }
      
    if(existe <= 1){
      salto1:
        printf("\n------------------------------\n");
        printf(" \nRemover de novo por nome? [S/N]: ");
        scanf("\n%c",&escolha);
        printf("\n------------------------------\n");
      /*tratamento de erro para caso o usuario nao obedeca ao que foi indicado*/
      if(toupper(escolha) != 'S' && toupper(escolha) != 'N'){
      goto salto1;
      }
     }else { escolha = 'N'; }
      

    }while(toupper(escolha)=='S');     
  	
    break;


//############ CPF #####################

	case 2:

	do{ 
     
      printf("\nInsira o CPF da pessoa a ser removida\n");
      scanf( "%s", CPF);
      /*Tenta abrir o arquivo original para leitura/escrita*/
      fp1 = fopen("NOMEARQUIVO.bin","r+b");
      if(fp1 == NULL){
          fprintf(stderr,"Nao consegui abrir %s\n", "NOMEARQUIVO.bin");
          exit(1);
      } 
      /*o arquivo "reserva.bin" vai receber os dados do arquivo original que não serao removidos*/
      /*Acrescenta dados ou cria uma arquivo binario para leitura e escrita*/
      fp2 = fopen("reserva.bin", "a+b");
      if(fp2 == NULL){
          printf("\nProblema de memoria para realizar a remocao\n");
          exit(1);
      } 
      /*a variavel abaixo serve para verificar se o CPF, indicado pelo usuario, esta mesmo cadastrado, pois se nao estiver, o programa deve avisar isso e evitar perda de tempo*/
      existe = 0;
      while(fread(&ponteiro,sizeof(ponteiro),1,fp1)==1 && !feof(fp1)){
           if(strcmp(ponteiro.cpf,CPF)==0 ){
              existe = 1;
            }
      }
      /*Se houver alguem com o CPF indicado pelo usuario, os dados do arquivo apontado pelo ponteiro fp1 são passados para uma struct*/
      if(existe == 1){
      while(fread(&ponteiro,sizeof(ponteiro),1,fp1)==1 && !feof(fp1)){
           /*a struct ponteiro é usada para achar, no arquivo original, o CPF indicado pelo usuario. Quando achar, todos os dados dessa pessoa, incluindo o CPF, nao serao copiados para o arquivo "reserva.bin"*/
           if(strcmp(ponteiro.cpf,CPF)==0){}
           else{fwrite(&ponteiro,sizeof(ponteiro),1,fp2);}
      }
        printf("\n-----Removendo o seguinte  cadastro-----\n");  
        printf("Nome: %s\n",ponteiro.nome);
        printf("CPF: %s\n",ponteiro.cpf);
        printf("Endereco: %s\n",ponteiro.rua);
        printf("telefone: %s\n",ponteiro.telefone);
        printf("telefone: %d\n",ponteiro.nCasa);
        printf("\n------------------------\n");

      /*liberacao dos ponteiros*/
      fclose(fp1);
      fclose(fp2);
      /*arquivo original e apagado*/
      remove("NOMEARQUIVO.bin");
      /*reserva.bin passa a ter o nome do arquivo original*/
      rename("reserva.bin", "NOMEARQUIVO.bin");
      printf("\nRemoção realizada com sucesso\n");
      }
      /*tratamento de erro*/
      if(existe == 0){
        printf("\nNao existe pessoa cadastrada com esse CPF\n"); 
      }
      
    /*tratamento de erro para possiveis falhas de atencao do usuario*/
    salto2:
    printf("\n------------------------------\n");
    printf(" \nRemover de novo por cpf? [S/N]: ");
    scanf("\n%c",&escolha);
    printf("\n------------------------------\n");
  
     if(toupper(escolha) != 'S' && toupper(escolha) != 'N'){
     goto salto2;
     }

    }while(toupper(escolha)=='S');     
  	   
    break;


//############ Nome da Rua ################

	case 3:

		do{ 
     
      printf("\nInsira o nome da rua da pessoa a ser removida\n");
      fgets(leitor.rua, N, stdin);
      for(i=0; i<N; i++)
      {
        leitor.rua[i] = toupper(leitor.rua[i]);
      }
      /*Tenta abrir o arquivo original para leitura/escrita*/
      fp1 = fopen("NOMEARQUIVO.bin","r+b");
      if(fp1 == NULL){
          fprintf(stderr,"Nao consegui abrir %s\n", "NOMEARQUIVO.bin");
          exit(1);
      } 
      /*o arquivo "reserva.bin" vai receber os dados do arquivo original que não serao removidos*/
      /*Acrescenta dados ou cria uma arquivo binario para leitura e escrita*/
      fp2 = fopen("reserva.bin", "a+b");
      if(fp2 == NULL){
          printf("\nProblema de memoria para realizar a remocao\n");
          exit(1);
      } 
      /*a variavel abaixo serve para verificar se o nome da rua, indicado pelo usuario, esta mesmo cadastrado, pois se nao estiver, o programa deve avisar isso e evitar perda de tempo*/
      existe = 0;
      while(fread(&ponteiro,sizeof(ponteiro),1,fp1)==1 && !feof(fp1)){
           if(strcmp(ponteiro.rua,leitor.rua)==0 ){
              existe ++;
            }
      }
      /*Se houver alguem com o nome da rua indicado pelo usuario, os dados do arquivo apontado pelo ponteiro fp1 são passados para uma struct*/
      if(existe == 1){
      while(fread(&ponteiro,sizeof(ponteiro),1,fp1)==1 && !feof(fp1)){
           /*a struct ponteiro é usada para achar, no arquivo original, o nome da rua indicado pelo usuario. Quando achar, todos os dados dessa pessoa, incluindo o nome da rua, nao serao copiados para o arquivo "reserva.bin"*/
           if(strcmp(ponteiro.rua,leitor.rua)==0){}
           else{fwrite(&ponteiro,sizeof(ponteiro),1,fp2);}
      }
        printf("\n-----Removendo o seguinte cadastro-----\n");  
        printf("Nome: %s\n",ponteiro.nome);
        printf("CPF: %s\n",ponteiro.cpf);
        printf("Endereco: %s\n",ponteiro.rua);
        printf("telefone: %s\n",ponteiro.telefone);
        printf("telefone: %d\n",ponteiro.nCasa);
        printf("\n------------------------\n");
     
      /*liberacao dos ponteiros*/
      fclose(fp1);
      fclose(fp2);
      /*arquivo original e apagado*/
      remove("NOMEARQUIVO.bin");
      /*reserva.bin passa a ter o nome do arquivo original*/
      rename("reserva.bin", "NOMEARQUIVO.bin");
      printf("\nRemoção realizada com sucesso\n");
      }
      //tratamento de erro
       else if(existe > 1){
        printf("\nExiste mais de um com esse endereco, tente por cpf\n");
      }
      if(existe == 0){
        printf("\nNao existe pessoa cadastrada com esse CPF\n"); 
      }
      
    //tratamento de erro 
    salto3:
    printf("\n------------------------------\n");
    printf(" \nRemover de novo por nome da rua? [S/N]: ");
    scanf("\n%c",&escolha);
    printf("\n------------------------------\n");
  
    if(toupper(escolha) != 'S' && toupper(escolha) != 'N'){
     goto salto3;
    }
    }while(toupper(escolha)=='S');     
  
		break;


//########### Idade ##################

case 4:
  	
    	do{ 
     
    printf("\nInsira a idade da pessoa a ser removida\n");
    scanf( "%d", &leitor.idade);
    /*Tenta abrir o arquivo original para leitura/escrita*/
    fp1 = fopen("NOMEARQUIVO.bin","r+b");
    if(fp1 == NULL){
        fprintf(stderr,"Nao consegui abrir %s\n", "NOMEARQUIVO.bin");
        exit(1);
    } 
    /*o arquivo "reserva.bin" vai receber os dados do arquivo original que não  serao removidos*/
    /*Acrescenta dados ou cria uma arquivo binário para leitura e escrita*/
    fp2 = fopen("reserva.bin", "a+b");
    if(fp2 == NULL){
        printf("\nProblema de memoria para realizar a remocao\n");
        exit(1);
    } 
    /*a variavel abaixo serve para verificar se a idade  indicada pelo usuario esta mesmo cadastrado, pois se nao estiver, o programa deve avisar isso e evitar perda de tempo*/
    existe = 0;
    while(fread(&ponteiro,sizeof(ponteiro),1,fp1)==1 && !feof(fp1)){
          if(ponteiro.nCasa==leitor.idade){
            existe ++;
          }
    }
    /*Se houver alguem com a idade indicada pelo usuario, os dados do arquivo    apontado pelo ponteiro fp1 são passados para uma struct*/
    if(existe == 1){
    while(fread(&ponteiro,sizeof(ponteiro),1,fp1)==1 && !feof(fp1)){
          /*a struct s1 é usada para achar, no arquivo original, a idade  indicada pelo usuario. Quando achar, todos os dados dessa pessoa, incluindo a idade, nao serao copiados para o arquivo "reserva.bin"*/
          if(ponteiro.nCasa==leitor.idade){}
          else{fwrite(&ponteiro,sizeof(ponteiro),1,fp2);}
    }
      printf("\n-----Removendo o seguinte  cadastro-----\n");  
      printf("Nome: %s\n",ponteiro.nome);
      printf("CPF: %s\n",ponteiro.cpf);
      printf("Endereco: %s\n",ponteiro.rua);
      printf("telefone: %s\n",ponteiro.telefone);
      printf("telefone: %d\n",ponteiro.nCasa);
      printf("\n------------------------\n");
    
    /*liberacao dos ponteiros*/
    fclose(fp1);
    fclose(fp2);
    /*arquivo original e apagado*/
    remove("NOMEARQUIVO.bin");
    /*reserva.bin passa a ter o nome do arquivo original*/
    rename("reserva.bin", "NOMEARQUIVO.bin");
    printf("\nRemoção realizada com sucesso\n");
    }
    else if(existe > 1){
        printf("\nExiste mais de uma pessoa com essa idade, tente por cpf.\n");
      }
      if(existe == 0){
        printf("\nNao existe pessoa cadastrada com essa idade\n"); 
      }
      
    /*tratamento de erro para possiveis falhas de atencao do usuario*/
    salto4:
    printf("\n------------------------------\n");
    printf(" \nRemover de novo por Numero da casa? [S/N]: ");
    scanf("\n%c",&escolha);
    printf("\n------------------------------\n");
  
    if(toupper(escolha) != 'S' && toupper(escolha) != 'N'){
     goto salto4;
    }
    }while(toupper(escolha)=='S');     
 
  break;


 //############# Fim  ###############

	case 5:
    goto fim; // vai para a linha 575
		break;

//###############################################################

	default:
		printf("Opção Inválida");
	}

  salto7:
  printf("\n------------------------------\n");
  printf(" \nRemover de novo por outro metodo? [S/N]: ");
  scanf("\n%c",&escolha);
  printf("\n------------------------------\n");
  if(toupper(escolha) != 'S' && toupper(escolha) != 'N'){
  goto salto7;
  }

  }while(toupper(escolha)=='S');
    
    fim: // Atalho com o goto
    return ; 
}
