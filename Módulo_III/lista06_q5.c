#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
# define N 40


int main(void){

//VARIAVEIS
int L[N] = {52, 12, 78, 25, 44, 10, 98, 61, 82, 34};
//          0   1   2   3   4   5   6   7   8   9
// MENOR QUE 30 = 12, 25, 10 MAIOR QUE 30: 52, 78, 44, 98, 61, 82, 34
int X = 30, i, troca, J;
int M = 10;
//Passo 00: LISTA SEM O X E DESORDENADA
for( i=0; i<M; i++) printf("%d ", L[i]); printf("\n\n");

//Passo 01: INSIRIR O X NA LISTA
L[i] = X;
M++;
//Passo 02: ORDENADAR A LISTA COM O X 
for(int a=0; a<M; a++){
  for(int b=a; b<M; b++){
    if(L[a]>L[b]){
          troca = L[a];
          L[a] = L[b];
          L[b] = troca;
    }
  }
}//fecha for
//Passo 03: RETIRO O X 
      //Identificar a posição do X; 
i = 0;
while(i<M && L[i]<X) i++;
      //COLOCANDO OS ELEMETOS PARA ESQQUERDA
if(J<M && L[i] == X){
    J = i+1;
    while(J<=M) {
    L[J-1] = L[J]; J++;// EXPLICANDO COM OS VALORES DAS POSIÇÕES: J = 8(J=i+1), enquanto o J estiver menor que M = 10 o J = 7( L[J-1] ) vai ser trocado pelo L[J] sempre aumentando o valor do J, até chegar no M = 10; 
}
M--;
}
//Passo 04: EXIBIR A LISTA SEM O X

for(int i=0; i<M; i++) printf("%d ", L[i]); printf("\n\n");


  }//fecha o main