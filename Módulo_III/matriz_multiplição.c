#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
# define N 3

int main(void){
//VARIAVEIS
int A[N][N];
int B[N][N];
int C[N][N];

// ETAPA 01:  inicializar a matriz A 
int  k=0, aux;
for(int i = 0; i < N; i++){
  for(int j = 0; j < N; j++){
      
                 B [i][j] = k; k++; 
      if(i==j) { A [i][j] = 1; } 
      else     { A [i][j] = 0; }

      }
}  
  // ETAPA 02: Exibir a matriz A e a B
for(int i = 0; i < N; i++){
  for(int j = 0; j < N; j++){
     
       printf("%3d ", A[i][j]);
       
       
       }
} printf("\n\n");
  for(int i = 0; i < N; i++){
   for(int j = 0; j < N; j++){
     
       printf("%3d ", B[i][j]);
       
       
       }
}

printf("\n\n");

// ETAPA 02:multiplicação da matriz A pela B
for(int i=0; i<N; i++){
  for(int j=0; j<N; j++){
    int result = 0;
    for(k=0; k<N; k++){

      result+= A[i][k] * B[k][j];
      C[i][j] = result; 


    }
  }
}
//ETAPA 03: Eibir a matriz

for(int i=0; i<N; i++){
  for(int j=0; j<N; j++){
    printf("%3d ", C[i][j]); 
  }
}

printf("\n\n");
}//fecha o main