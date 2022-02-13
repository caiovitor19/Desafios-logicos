#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <time.h>
# define N 20
int L[N],  M = 10,  X = 20; 

void inicialização_lista(){
 int p; 
 srand(time(NULL));
      for(int j=0; j<M; j++){
        p = rand() % 100; 
          L[j]= p; p++; 
    } 
}

void odenação_lista(){
  int Maior, aux, pos; 
    
  for(int J = 0; J<M; J++){
    Maior = L[0]; pos = 0; 
  for(int t=1; t<M-J; t++)
  
    if(L[t] > Maior){
      Maior = L[t]; pos = t; 
    } 
    aux = L[pos]; L[pos] = L[M-1-J]; L[M-1-J] = aux;
  }
}

void exibir_lista(){
for(int j=0; j<M; j++){
    printf("%d ",     L[j]);    
    } 
 printf("\n\n");
}
void inserção(int i){
  L[i] = X;
  M++; 
}

void deslocar_X(int i){
  int J = M; 
  while(J>=i) {
    L[J+1] = L[J]; J--;  
  }
}

void  localização_X(){
  int  i = 0;
  while(i<M && L[i]<X) i++; 
  deslocar_X(i); 
  inserção(i); 
}
int  main(){
inicialização_lista();
odenação_lista();
exibir_lista();
localização_X();
exibir_lista(); 
}
