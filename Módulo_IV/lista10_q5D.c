




//-------------------------------------------REFAZER--------------------------------




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

void exibir_lista(){
  for(int i=0; i<N; i++){
    for(int j=0; j<M; j++){
      printf("%3d", L[i][j]); 
    }
  }
}
void verificar(int X){
 for(int i=0; i<N; i++){
    for(int j=0; j<M; j++){
      if(X == L[i][j]){
          printf("\n\nO %d já está na lista",X); 
      }
    }
  }
}

void inserir(int X, int lista){
    for(int j=0; j<M; j++){
        L[lista-1][j] = X;
        L[lista-1][j]++; 
    }
}
void dados_usuario(){
int lista, X;
printf("\n\nDigite o valor que deseja inserir: "); 
scanf("%d", &X); 

printf("\n\nDigite a lista que deseja inserir o valor: ");
scanf("%d", &lista);

verificar(X), inserir(X, lista); 
}



int main(){
  exibir_lista();
  dados_usuario();
}