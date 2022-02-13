#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <time.h>
# define N 20

int L[N] =  { 5, 12, 19, 27, 28, 31, 39, 42, 53, 70}, X = 42, M=10;


void exibir(){
  for(int i=0; i<M; i++){
    printf("%d ", L[i]);
  }
}

void result(int j){
    printf("\n\nO %d, está na posição: %d", X, j+1); 
}

void busca(){

    int j=0;
    while(j<M && L[j] != X)  j++; 
    result(j); 
}

