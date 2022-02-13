#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
# define N 10

int main(void){
//VARIAVEIS
int L[N] =   {0, 0, 2, 1, 1, 0, 2, 1, 1, 0};
//            0  1  2  3  4  5  6  7  8  9

int main(void){
//VARIAVEIS
int L[N] =   {0, 0, 2, 1, 1, 0, 2, 1, 1, 0};
//            0  1  2  3  4  5  6  7  8  9

// ETAPA 01: Exibir a lista 
for(int i=0; i<N; i++)  printf("%d ",L[i]); printf("\n\n"); 

for(int J=0; J<N; J++){

  int M = L[0], pos = 0, aux;

    for(int i=1; i<N-J; i++){
      if(L[i] > M){
        M = L[i]; pos = i; 
      }
    }
aux = L[pos]; L[pos] = L[N-J-1] ;  L[N-J-1] = aux; 
}

// ETAPA 00: Exibir a lista ordenada
for(int i=0; i<N; i++)  printf("%d ",L[i]); printf("\n\n"); 
}//fecha o main