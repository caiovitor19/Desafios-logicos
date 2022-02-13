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
// MATRIZ NÃO TRIANGULARIZADA
  for(int i=0; i<M; i++){
    for(int j=0; j<N; j++){
        printf("%5.1f ", A[i][j] );
    }
  }
 
 for(int j=0; j<N-1; j++){
    for(int i=j+1; i<M; i++){

      if(A[i][j] != 0){
  
  //CANCELAMENTO PELA SOMA
    for(int k=0; k<N; k++){
      A[i][k] = A[i][k] * (-1) * A[j][j] / A[i][j]; 
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
  for(int i=0; i<M; i++){
    for(int j=0; j<N; j++){
        printf("%5.1f ", A[i][j]);
    }
  }

printf("\n\n");

}//fecha main