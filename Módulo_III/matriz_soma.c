#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
# define M 3
# define N 4

int main(void){
//VARIAVEIS
int A[M][N], B[M][N], C[M][N];

// ETAPA 00:  inicializar a matriz A B
for(int i = 0; i < M; i++){
  for(int j = 0; j < N; j++){

      A [i][j] = 1*(i+j); 
      B [i][j] = 2*(i+j); 
      } 
  }
  // ETAPA 00: somar as matrizes A e B
for(int i = 0; i < M; i++){
  for(int j = 0; j < N; j++){

      C[i][j] = A[i][j] + B[i][j];

      } 
  }

// ETAPA 00: 

for(int i = 0; i < M; i++){
  for(int j = 0; j < N; j++){

      printf("%3d ", A[i][j]); 

      } 
  }
    printf("\n\n");
  for(int i = 0; i < M; i++){
  for(int j = 0; j < N; j++){

      printf("%3d ", B[i][j]); 

      } 
  }
  printf("\n\n");
  for(int i = 0; i < M; i++){
  for(int j = 0; j < N; j++){

      printf("%3d ", C[i][j]); 

      } 
  }

    printf("\n\n");
// ETAPA 00: 

}//fecha o main