#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
# define N 2 //LINHA
# define M 3 // COLUNA

int main(void){
//VARIAVEIS
int A[N][M]; // (2 x 3)
int B[M][N]; // (3 x 2)
int C[N][N]; // (2 x 2)
int k = 0; 


// ETAPA 01:  inicializar a matriz A 
for(int i = 0; i < N; i++){ // até 2
  for(int j = 0; j < M; j++){ // até 3
        A[i][j] = k; k++; 
  }
}

int x = 0;
for(int i = 0; i < N; i++){ // até 2
  for(int j = 0; j < M; j++){ // até 3
        B[j][i] = x; x++; 
  }
}
//ETAPA 02: multiplicar A * B = C (2 X 2)
for(int i=0; i<N; i++){        //PERCORRER AS LINHAS DE A  (2x)
  for(int j=0; j<N; j++){      //PERCORRER AS COLUNAS DE B (2x)
    int result = 0;
    for(int k=0; k<M; k++){    // PERCORRER CADA POSIÇÃO   (3X)
    result += A[i][k] * B[k][j];
    C[i][j] = result;
    }
  }
}


//ETAPA 03: Exibir a matriz

    for(int i=0; i<N; i++){    // até 2
      for(int j=0; j<M; j++){ // até 3
        printf("%3d ", A[i][j]); 
      }
    }

     printf("\n\n");
    for(int i=0; i<M; i++){    // até 2
      for(int j=0; j<N; j++){ // até 3
        printf("%3d ", B[i][j]); 
      }
    }

        printf("\n\n");
    for(int i=0; i<N; i++){    // até 2
      for(int j=0; j<N; j++){ // até 2
        printf("%3d ", C[i][j]); 
      }
    }
    printf("\n\n");
}//fecha o main