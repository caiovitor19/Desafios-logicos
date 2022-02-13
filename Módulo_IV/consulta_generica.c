#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#define N 10

int main(){

  system("clear"); 

  enum especie {gato, cobra, coelho, nao_importa};

struct animal {
  char         nome[50], dono[50];
  enum especie tipo; 
  int          idade;
  float        peso;
};

//BANCO DE DADOS JÁ INSERIDO
struct animal B[N] = { 
{"juquinha", "Sr Silva", gato, 3, 2.3},
{"biju", "Bianca", coelho, 1, 0.5},
{"biju", "Aninha", gato, 3, 3.2},
{"dengosa", "Sra Silva", cobra, 45, 18.0},
{"sansao", "Sr Luis", gato, 2, 3.2},
{"alexander", "Sr Silva", cobra, 1, 0.2},
};

struct animal X; 
int M = 6, op; 

// INSERÇÃO DE DADOS PELO USUARIO

printf("INSIRA AS INFORMAÇÕES QUE DESEJA PESQUISAR\n\n"); 
printf("Nome: "); fgets(X.nome, 50, stdin); 

printf("Especie: (1) gato  (2) cobra (3) coelho (4) Não importa \n"); 
printf("Escolha uma opção: "); scanf("%d", &op);
if      (op == 4) { X.tipo = nao_importa;}
else if (op == 1) { X.tipo = gato;}
else if (op == 2) { X.tipo = cobra;}
else if (op == 3) { X.tipo = coelho;}

printf("Idade: ");   scanf("%d", &X.idade);
printf("Peso: ");    scanf("%f", &X.peso);


for(int i=0; i<M; i++){
    if(
(strncmp (B[i].nome, X.nome, strlen(B[i].nome ))==0 ||
strcmp(X.nome,"\n") == 0 ) &&
( B[i].tipo == X.tipo   || X.tipo == nao_importa)    &&
( B[i].peso == X.peso   || X.peso == 0)              &&
( B[i].idade == X.idade || X.idade == 0)  

  ){//if

//PESQUISA
printf("\nRESULTADO DA PESQUISA\n");

printf("Nome: %s\n", B[i].nome); 

printf("responsável: %s\n", B[i].dono);

printf("Especie: "); 
if        (B[i].tipo == gato )  { printf("gato \n"); }
else if   (B[i].tipo == cobra ) { printf("cobra \n");}
else if   (B[i].tipo == coelho) { printf("coelho \n");} 
printf("Idade: %d\n", B[i].idade); 
printf("Peso: %3.2f\n", B[i].peso); 

    }//fecha if
  }//fecha for
}//fecha main