#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#define N 10

int main(){

  system("clear"); 

  enum especie {gato, cobra, coelho};

struct animal {
  char         nome[50], responsavel[50];
  enum especie tipo; 
  int          idade;
  float        peso;
};
//BANCO DE DADOS JÁ INSERIDO
struct animal B[N] = { 
{"juquinha", "Sr Silva", gato, 3, 2.3},
{"valadao", "Bianca", coelho, 1, 0.5},
{"biju", "Aninha", gato, 3, 3.2},
{"dengosa", "Sra Silva", cobra, 45, 18.0},
{"sansao", "Sr Luis", gato, 2, 3.2},
{"alexander", "Sr Silva", cobra, 1, 0.2},
};

struct animal X; 
int M = 6; 

for(int i=0; i<M; i++){


    if(B[i].tipo == cobra){



//PESQUISA
printf("\nRESULTADO DA PESQUISA\n");

printf("Nome: %s\n", B[i].nome); 

printf("responsável: %s\n", B[i].responsavel); 

printf("Especie: "); 
if(B[i].tipo == gato )      { printf("gato \n"); }
else if(B[i].tipo == cobra ) { printf("cobra \n");}
else if(B[i].tipo == coelho ) { printf("coelho \n");} 
 
printf("Idade: %d\n", B[i].idade); 

printf("Peso: %5.2f\n", B[i].peso);

}//fecha if

    }//fecha for
    
}