#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#define N 4
#define M 5 
/*  
ETAPA 01: Inicializar a matriz com valores aleatorios, utilizando o rand e o srand
ETAPA 02: As listas das liatas foram inicializadas como matrizes, porém a partir de agora, são apenas listas dentro de listas, vamos ver elas como listas, onde cada linha possui L[1][4];
 */

int L[N][M];

void inicializar_matriz(){
int  p;
  srand(time(NULL));
  
  //Utilizei a mesma logica das aulas, nada de novo, fiz os dois for para percorrer linha e coluna e coloquei em cada posição o valor de p 
  for(int i=0; i<N; i++){
      for(int j=0; j<M; j++){
          p = rand() % 100; 
          L[i][j] = p;
    } 
  } 
}

void impressão_matriz(){
    for(int i=0; i<N; i++){
      for(int j=0; j<M; j++){
          printf("%4d ", L[i][j]); 
    } 
  } 
}

//pensando na matriz 4 x 5 como em 4 listas de  5  elementos, temos:

void maior(){
  
      for(int t=0; t<N; t++){
          for(int k = 0; k<M-1; k++){
            int maior = L[0+t][0], pos = 0, aux; 
              for(int i=0; i<1; i++){
                for(int j=0; j<M-k; j++){
                  if(L[i+t][j] > maior) {  maior =  L[i+t][j]; pos = j; }
            }
          }
        aux = maior; L[0+t][pos] = L[0+t][M-1-k]; L[0+t][M-1-k] = aux; 
    }
  }
}

int main(){
  system("clear");
   inicializar_matriz(); 
  printf("\n\n");
  impressão_matriz(); 
  printf("\n\n");
  maior();
  printf("\n\n");
  impressão_matriz(); 
}





