#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
# define N 2
# define M 3 


int main(void){
double A[N][M] = {{2,1,2} , {1,2,4}};

//ETAPA 01: CANCELAMENTO --- L2 = L2 * (-1) * (A[0][0]/[1][0])

A[1][0] = A[1][0] * (-1) * (A[0][0]/A[1][0]);

//ETAPA 02: SOMA ----

for(int i=0; i<N; i++) {
  for(int j=0; j<M; j++){
    A[1][j] =  A[1][j] + A[0][j]; 
  }
}
float X, Y;  

Y = A[1][2] / A[1][1];
X = ( A[1][2] - A[1][1] * Y );

printf("X = %f \nY = %f", X, Y);

} //fecha o main