#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
# define N 10

int main(void){

//VARIAVEIS
int L[5] = {0,5,10,20,28};
int M[5] = {7,3,16, 7, 9};
//          0  1  2  3  4 
int X[10];
int troca; 

// printf("%d ", i); printf("\n\n");
//REALIZEI A UNIÃO DOS DOIS VETORES(L[] e M[]) em um (X[])
for(int i=0; i<5; i++){
  X[i*2] = L[i];
} for(int i =0; i<5; i++){
   X[i*2+1] = M[i];
}


//REALIZAR A ORDENAÇÃO DOS ELEMENTOS
for(int a=0; a<10; a++){
  for(int b=a; b<10; b++){
    if(X[a]>X[b]){
          troca = X[a];
          X[a] = X[b];
          X[b] = troca;
    }
  }

}//fecha for
//NUMEROS SEM A ORDEM
for(int i=0; i<10; i++) printf("%d ", X[i]);

}//fecha o main