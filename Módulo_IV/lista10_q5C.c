#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
# define N 4
# define M 5 
int L[N][M] = { { 1,  4,  9,   21,  18 },
                { 3,  8,  17,  33,  42 },
                { 2,  6,  11,  13,  15 },
                { 5,  10, 14,  22,  25 }};
int X = 11; 

void exibir(){
  printf("\n\n"); 
  for(int i=0; i<N; i++)
    for(int j=0; j<M; j++){
      printf("%3d", L[i][j]);
    }
}

void result(int j, int k){
  
  printf("\n\nX = %d\nLista: %d\nPosição:%d", X, k+1, j+1); 

}
void busca(){
      int pos, lista; 
    for(int k=0; k<N; k++){
      pos = 0, lista = 0;
      for(int i=0; i<1; i++){
        for(int j=0; j<M; j++){
          if(L[i+k][j] == X){
            result(j, k);  
        }
      }
    }
  }

  
}
int main(){
  system("clear"); 
  exibir();
  busca(); 

}