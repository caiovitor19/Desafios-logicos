#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#define N 4
#define M 3
/*  
ETAPA 01: Inicializar a matriz com valores aleatorios, utilizando o rand e o srand

 */
 int main(){
  int L[M][N], p;
  srand(time(NULL));
  p = rand() % 100; 
  //Utilizei a mesma logica das aulas, nada de novo, fiz os dois for para percorrer linha e coluna e coloquei em cada posição o valor de p 
  for(int i=0; i<M; i++){
      for(int j=0; j<N; j++){
          L[i][j] = p; p++;
          printf("%4d", L[i][j]); 
      } 
  } printf("\n\n");  
}
