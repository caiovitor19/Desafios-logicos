
#include <stdlib.h>
#include <stdio.h>
#define N 8
#define M 9
/*
 
*/
struct pessoa {
  char   nome[50];
  int    codigo; 
};

struct pessoa L[N] = {
  {"Maria", 27},
  {"Pedro", 17},
  {"Ana",   14},
  {"Ivo",   31},
  {"Maria", 11},
  {"Juca",  44},
  {"Bia",   28},
  {"Pedro", 51},
};

struct pessoa X; 

struct amigo {
int cod1, cod2;
};
struct amigo T[M] = {
  {17, 27},
  {27, 11},
  {31, 14},
  {28, 31},
  {44, 51},
  {14, 44},
  {28, 27},
  {51, 17},
  {44, 28},
};

struct amigo Y; 



//EXIBIR NOME E PESSOA
void exibir_lista(int cod){

//PERCORRO A LISTA PARA VERIFICAR OS NOMES:
  for( int i=0; i<N; i++){
   if(cod == L[i].codigo){
      printf("%s: ", L[i].nome);
   } 
  }//for 1
// PERCORRO A LISTA PARA VERIFICAR OS AMIGOS
    for(int j=0; j<M; j++){
//Vejo se há ocorrencia da pessoa na primeira coluna, se tiver exibo o amigo que está na segunda coluna
        if(cod == T[j].cod1){  
           
              for(int k=0; k<N; k++){ 
                if(T[j].cod2 == L[k].codigo){
                  
                  printf("%s, ",L[k].nome);
                
                }
              }
            }
//Vejo se há ocorrencia da pessoa na segunga coluna, se tiver exibo o amigo que está na primeira coluna
         if(cod == T[j].cod2){
         // printf("%d, ",T[j].cod1);
        
        
              for(int k=0; k<N; k++){ 
                if(T[j].cod1 == L[k].codigo){
                  
                  printf("%s, ",L[k].nome);
                
                }
              }
        

        } 
    }//for 2 
    printf("\n\n");
  
}// void
//================================================
 void dados(){
  int cod; 
  printf("Cod: "); scanf("%d", &cod); 
  exibir_lista(cod); 
  }
//================================================
int main(){
  system("clear"); 
  dados();
}



