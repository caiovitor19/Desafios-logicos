#include <stdlib.h>
#include <stdio.h>
#include <math.h>
# define M 3
# define N 4 
int main(void){
//VARIAVEIS 
double A[M][N] = { {  1, -2,  3,  7 },
                   {  2,  1,  1,  4 },
                   { -3,  2, -2, -10}
                 };
double factor;            

  // MATRIZ NÃO TRIANGULARIZADA
    printf("\nMatriz:\n");
  for(int i=0; i<M; i++){
    for(int j=0; j<N; j++){
        printf("%5.1f ", A[i][j] );
    }
  }


  for(int j=0; j<N-1; j++){
    for(int i=j+1; i<M; i++){

      if(A[i][j] != 0){

  factor =  (-A[j][j] / A[i][j]); 

  //CANCELAMENTO PELA SOMA
    for(int k=0; k<N; k++){
      
      A[i][k] = A[i][k] * factor; 
    }
  //SOMA 
    for(int k=0; k<N; k++){
      A[i][k] = A[i][k] + A[j][k];
     }
    }//if
  }//for i
}//for j


printf("\n\n");

  // MATRIZ TRIANGULARIZADA

printf("\nTriangularizada:\n");

  for(int i=0; i<M; i++){
    for(int j=0; j<N; j++){
        printf("%5.1f ", A[i][j]);
    }
  }

printf("\n\n");


//DIAGONALIZAÇÃO 
  for(int j=N-2; j>=1; j--){
    for(int i=j-1; j>=0; i--){

      if(A[i][j] != 0){

  factor =  (-A[j][j] / A[i][j]); 

  //CANCELAMENTO PELA SOMA
    for(int k=0; k<N; k++){
      A[i][k] = A[i][k] * factor;  
    }
  //SOMA 
    for(int k=0; k<N; k++){
      A[i][k] = A[i][k] + A[j][k];
     }
    }//if
  }//for i
}//for j

  // MATRIZ TRIANGULARIZADA

printf("\nDiagonalizada:\n");

  for(int i=0; i<M; i++){
    for(int j=0; j<N; j++){
        printf("%5.1f ", A[i][j]);
    }
  }

printf("\n\n");

printf("\nResultado do sistema    linear:\n");

}//fecha main