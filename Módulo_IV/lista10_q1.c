#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#define N 10

int L[N] = {10, 18, 22, 30, 32, 35, 80, 91, 95, 100 }; 

/*
ETAPA 01: FAZER A IMPRESSÃO DA imprimir_lista || ok
ETAPA 02: SORTEAR A POSIÇÃO QUE IRÁ SER TROCADA || ok
ETAPA 03: TROCAR O VALOR DA POSIÇÃO SORTEADA COM O ELEMENTO DA PRIMEIRA POSIÇÃO
ETAPA 04: ORGANZAR TUDO DENTRO DO MAIN
*/

/*ETAPA 01*/ void imprimir_lista(){
  for(int i=0; i<N; i++) printf("%d ", L[i]);
} 
/*ETAPA 02 */ void trocar_valor(){
  int aux, p; 
  p = rand() % 10;
  /*ETAPA 03*/
  aux  = L[0];
  L[0] = L[p]; 
  L[p] = aux; 
}
/*ETAPA 04*/ int main(){
  system("clear"); 
  //TIME PARA SER A SEMENTE DO RAND
  time_t s;
  srand(time(NULL)); 
  //
  imprimir_lista();
  printf("\n\n");
  //
  for(int j=0; j<10; j++){
  trocar_valor();
  imprimir_lista(); printf("\n\n");
  }
}

