#include <stdlib.h>
#include <stdio.h>
#include <math.h>
# define N 5
/*
Minha logica consiste no seguinte:

ETAPA 01: Inicializar a matriz aletoriamente, assim como visto na aula

ETAPA 02: triangularizar a matriz

ETAPA 03: embaralhar 

ETAPA 04: desembaralhar - o mesmo processo anterior 

ETAPA 05: organizar o main
*/

//VARIAVEIS 
double L[N][N];
//==========================ETAPA 01===============================
void inicializar_matriz(){
int  k=1, aux;
for(int i = 0; i < N; i++){
  for(int j = 00; j < N; j++){
      
      L [i][j] = k; k++;   

    }
  } 
}

//==========================ETAPA 02===============================
void triangularização(){

 for(int j=0; j<N-1; j++){
    for(int i=j+1; i<N; i++){

      if(L[i][j] != 0){
  
  //CANCELAMENTO PELA SOMA
    for(int k=0; k<N; k++){
      L[i][k] = L[i][k] * (-1) * L[j][j] / L[i][j]; 
    }
  //SOMA 
    for(int k=0; k<N; k++){
      L[i][k] = L[i][k] + L[j][k];
     }
    }//if
  }//for i
}//for j
}

//==========================ETAPA 03===============================
void exibir_matriz(){
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      printf("%6.1f", L[i][j]); 
    }
  }
}

//==========================ETAPA 03===============================
void embaralhar_matriz(){
//Aqui eu percebi que o embaralhamento era somente a troca de uma coluna por outra e de uma linha por outra...pra isso eu fiz a troca da linha 0 pela 2 e a coluna 0 pela 2...O detalhe está no fato de eu precisar fazer duas trocas, logo N/2, assim eu posso fazer para qualquer matriz n x n 

//Troca da linha
  int aux = 0;  
  for(int i=0; i<2; i++){
    for(int j=0; j<N; j++){
    aux = L[i][j];  L[i][j] = L[i+2][j];  L[i+2][j] = aux; 
    }
  }

// Trocar coluna
  int aux1;
  for(int i=0; i<N; i++){
    for(int j=0; j<2; j++){
    aux1 = L[i][j];  L[i][j] = L[i][j+2];  L[i][j+2] = aux1; 
    }
  }
}//void


//=========================ETAPA 04===============================
// o desembaralhamento é realizar a troca novamente, assim teremos a matriz triangularida novamente, como pede a questão. 
void desembaralhar_matriz(){

//Troca da linha
int aux = 0;  
  for(int i=0; i<N/2; i++){
    for(int j=0; j<N; j++){
    aux = L[i][j];  L[i][j] = L[i+2][j];  L[i+2][j] = aux; 
    }
  }

  // Trocar coluna
  int aux1;
  for(int i=0; i<N; i++){
    for(int j=0; j<N/2; j++){
    aux1 = L[i][j];  L[i][j] = L[i][j+2];  L[i][j+2] = aux1; 
    }
  }
}//void



//============================ETAPA 05===============================
  int main(){
    inicializar_matriz(); 
     exibir_matriz();          printf("\n\n\n"); 
    triangularização();
    exibir_matriz();
    embaralhar_matriz();       printf("\n\n\n"); 
    exibir_matriz();
    desembaralhar_matriz();    printf("\n\n\n"); 
    exibir_matriz();

  }