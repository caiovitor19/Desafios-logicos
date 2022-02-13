#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
# define N 10

int main(void){

//VARIAVEIS

int L[N] = {5, 2, 78, 2, 44, 10, 98, 61, 2, 34};
//          0  1  2   3  4   5   6   7   8   9
int X = 2, aux=0, M = 10;

//Passo 01: Exibir a lista normal
for(int i=0; i<N; i++) printf("%d ", L[i]); printf("\n\n");

//Passo 02: Contar a quantidade de posições com o valor de L = 2;
for(int i=0; i<N; i++){
  if(L[i]==X){
    aux++;
  }
}
//Passo 03: Remoção do valor L = 2
for(int i=0; i<N; i++){
  if(L[i]==X){
  L[i] = L[M-1];
  M--;}
}
//Passo 04: Adicionar o L = 2  no inicio da lista de acordo a quantidade informada pela variável 'aux'


//Passo 05: Exibir a lista com o valor de L no inicio

for(int i=0; i<M; i++) printf("%d ", L[i]); printf("\n\n");


  }//fecha o main
