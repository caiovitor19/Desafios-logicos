#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
# define N 10

int main(void){
//VARIAVEIS
int L[N] =   {13, 22, 33, 34, 55, 56, 70, 81, 98  }; 
//            0  1  2  3  4  5  6  7  8  9
int M = 9, i, pos, aux, Y, troca;

// ETAPA 00: Exibir a lista ordenada
printf("\nLista ordenada:\n ");
for(i=0; i<M; i++)  printf("%d ",L[i]); printf("\n\n"); 

// ETAPA 01: comando rand
int X = rand() % 2;
// ETAPA 02: adicionar o valor de X na lista
L[i] = X;
M++;
// ETAPA 03: Exibir a lista desordenada
printf("Lista com a inserção do X:\n ");
for(int i=0; i<M; i++)  printf("%d ",L[i]); printf("\n\n");

// ETAPA 04: Ordenar a lista
for(int a=0; a<N; a++){
  for(int b=a; b<N; b++){
    if(L[a]>L[b]){
          troca = L[a];
          L[a] = L[b];
          L[b] = troca;
    }
  }
}//fecha for
// ETAPA 03: Exibir a lista ordenada
printf("Lista ordenada com X:\n ");
for(int i=0; i<M; i++)  printf("%d ",L[i]); printf("\n\n");

}//fecha o main