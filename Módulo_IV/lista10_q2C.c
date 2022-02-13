#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <time.h>
# define N 20

int L[N] =  { 5, 12, 19, 27, 28, 31, 39, 42, 53, 70}; 
int M = 10,  X = 27; 

void exibir_lista(){
for(int j=0; j<M; j++){
    printf("%d ",     L[j]);    
    } 
 printf("\n\n");
}
void Remover_X(int i){
  int J; 
    if( J<M && L[i] == X){
        J = i+1;
        while( J<=M) {
        L[J-1] = L[J]; J++;
    }
  M--;
  }
}


void  localização_X(){
  int  i = 0;
  while(i<M && L[i]<X) i++; 
  Remover_X(i);  
}

int  main(){
exibir_lista();
localização_X();
exibir_lista(); 
}

int main(){
  exibir(); 
  busca();
   
}