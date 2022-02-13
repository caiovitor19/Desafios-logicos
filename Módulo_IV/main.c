#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#define N 10

int main(){









// Dividir o valor por 2 até chegar no menor qociente 
// O resto da divisão de cada valor será um valor da casa decimal 
// 
 

/* //Busca, insira e remova em um mesmo codigo 
int L[N] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
int X = 10, M=10; 

//----------------------------------EXIBIR--------------------------------------------
void exibir(){
  for(int i=0; i<M; i++) printf("%d ", L[i]);
}

//----------------------------------INSERÇÃO------------------------------------------
void insercao(int p){
// Apos a remoção do valor da posição seguinte irei inserir o X, naquela posição
int J, i = p; 
// DESLOCAR ELEMENTOS MAIORES QUE O X
J = M; 
while(J>=i) {
  L[J+1] = L[J]; J--;  
}
//INSIRO O X
L[i] = X;
M++; 
printf("\nInserção do X:\n"); 
exibir(); 
}


//----------------------------------REMOÇÃO------------------------------------------
void remocao(int t){
  int J; 
  
    J = t+1;
    while(J<=M) {
        L[J-1] = L[J]; J++;
    }
    M--;
      printf("Remoção:\n"); 
      exibir();  printf("\n"); 
      insercao(t);
  
}

//----------------------------------BUSCA---------------------------------------------
void busca(){
// busca para verificar a existencia do X na lista-------- se tiver ok
// se não tiver eu faço uma busca para saber o valor da posição depois do dele e enviarei para remoção, lá irei  remover o valor da posição seguinte a do X
  int aux = 0, pos = 0; 
  for(int i=0; i<N; i++){
    if(L[i] == X){
      aux++; pos = 1;
    }
  }
  if(aux == 0) {
    // printf("não tá"); 
  int t = 0;
  while(t<N && L[t] < X) t++; {
      remocao(t); 
  }
  
  }
  else         printf("O X está na lista\n\n"); 
}
//----------------------------------MAIN----------------------------------------------
int main(){
  printf("\n");
  printf("Lista: \n"); 
  exibir();
  printf("\n\n");
  busca(); 
}



*/