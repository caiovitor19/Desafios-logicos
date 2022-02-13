#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
# define N 10

int main(void){
//VARIAVEIS
int L[N] =   {12, 8, 3, 5, 7, 6, 4, 11, 9, 10};
//            0   1  2  3  4  5  6  7   8   9
int M, pos, aux, l, P, aux1, J,k;

for(int i=0; i<N; i++)  printf("%d ",L[i]); printf("\n\n"); 

// ETAPA 01: Ordenar a primeira metade da lista e exibir 
for(int J=0; J<5; J++){
    M = L[0]; pos = 0; 
    for(int i=1; i<N/2-J; i++){
      if(L[i] > M){
        M = L[i]; pos=i; 
      }
 }
 aux = L[pos]; L[pos] = L[(N/2)-1-J]; L[(N/2)-1-J] = aux; 
}

// 0 -> 9;   1 -> 8;   2 -> 7;    3 -> 4;   4-> 5;
// ETAPA 02: Ordenar a segunda metade a lista e exibir
for(int K=0; K<5; K++){
    P = L[5]; l = 0; 
    for(int i=6; i<N-K; i++){
      if(L[i] > P){
        P = L[i]; l=i; 
      }
 }
 aux1 = L[l]; L[l] = L[N-1-K]; L[N-1-K] = aux1; 
}

// ETAPA 03: Ordenar a lista
for(int K=0; K<N; K++){
    J = L[0]; k = 0; 
    for(int i=1; i<N-K; i++){
      if(L[i] > J){
        J = L[i]; k=i; 
      }
 }
 aux1 = L[k]; L[k] = L[N-1-K]; L[N-1-K] = aux1; 
}

// ETAPA 05: Exibir a lista ordenada
for(int i=0; i<N; i++)  printf("%d ",L[i]); printf("\n\n"); 
}//fecha o main