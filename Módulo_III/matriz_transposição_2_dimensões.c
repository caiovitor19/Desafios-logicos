#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
# define M 3
# define N 4

int main(void){
//VARIAVEIS
int A[M][N];
int B[N][M];

// ETAPA 01:  inicializar a matriz A 
int  k=0, aux;
for(int i = 0; i < M; i++){
  for(int j = 0; j < N; j++){
      
      A [i][j] = k; k++;   

      }
} 

  // ETAPA 02: Exibir a matriz A
for(int i = 0; i < M; i++){
  for(int j = 0; j < N; j++){
     
       printf("%3d ", A[i][j]);
       
       }
} 

   printf("\n\n"); 
// ETAPA 02: transposição da matriz A

for(int i = 0; i < M; i++){
  for(int j = 0; j < N; j++){

            B[j][i] = A[i][j];

      } 
}

//ETAPA 03: Eibir a matriz

for(int i = 0; i < N; i++){
  for(int j = 0; j < M; j++){

      printf("%3d ", B[i][j]); 

      } 
  }
}//fecha o main