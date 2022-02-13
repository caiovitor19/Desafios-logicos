#include <stdlib.h>
#include <stdio.h>
#define N 10
/*

Para a resolução desse problema eu pensei em duas etapas( ou duas funções)
 ETAPA 01: localizar o intervalo [i, j]
    i: o primeiro elemento que é maior que o próximo
    j: o primeiro elemento (depois de i) que é menor que o próximo
 ETAPA 02: ordenar o intervalo 

 usei algumas funções para tornar o programa mais pratico...
 
  

*/
int L1[N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int L[N] =  { 1, 4, 3, 2, 5, 6, 7, 8, 9, 10 };
//            0  1  2  3  4  5  6  7  8  9 

//EXIBIR A LISTA
 void exibir_lista(){
    for(int i=0; i<N; i++)  printf("%d ", L[i]); 
  }

//ORDENAR A LISTA ------- Aqui fiz uma ordenação varredura, comecei do y e fui até o x (converti os valores para outra variavel) decremetando, repeti isso fazendo a diferenca entre y e x, no qual me indicaria  a quantidade de vezes que o função teria que repetir 
void ordenacao(int i, int j){
    int x = i;
    int y = j; 
    int aux; 
    for (int i=0; i<y-x; i++){
        for (int j=y; j>x; j--)
          if ( L[j] < L[j-1] ){
            aux = L[j]; L[j] = L[j-1]; L[j-1] = aux;
   }
  }
}

//VERIFICA O INTERVALO   -------- Por meio desse código eu verifiquei o intervalo localizei o i, e depois, comecando do i localizei o j "enviei" os valores para a função ordenação, onde lá trabalhei com eles... obeservação i: o primeiro elemento que é maior que o próximo e o  j: o primeiro elemento (depois de i) que é menor que o próximo
void intervalo(){
  int i=0;
  while(i<N && L[i]< L[i+1]) i++; {
  int j = i;
  while(j<N && L[j] > L[j+1]) j++; 
  printf("\n\nIntervalo: [%d , %d]\n", i, j); 
    ordenacao(i, j);
  }
}

//PRINCIPAL -------organizei e chamei as funções
int main(){
  printf("Lista hackeada:\n");
  exibir_lista();

  intervalo(); 
  
  printf("\nLista ordenada:\n");
  exibir_lista(); 
}
