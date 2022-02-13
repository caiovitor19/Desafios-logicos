#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
# define M 3
# define N 3

int main(void){
//VARIAVEIS
int A[M][N], aux;

// ETAPA 01:  inicializar a matriz A 
int  k=0;
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
  for(int j = i; j < N; j++){

            aux = A[i][j]; 
            A[i][j] = A[j][i]; 
            A[j][i] = aux;

      } 
}


//ETAPA 03: Eibir a matriz

for(int i = 0; i < M; i++){
  for(int j = 0; j < N; j++){

      printf("%3d ", A[i][j]); 

      } 
  }
}//fecha o main