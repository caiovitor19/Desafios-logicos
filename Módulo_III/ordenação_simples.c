#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
# define N 10

int main(void){

//VARIAVEIS

int L[N] = {19, 27, 12, 31, 5, 28, 53, 39, 142, 70};
//          0   1   2   3   4  5   6   7   8    9
int pos, M, aux;

for(int J = 0; J<N; J++){
  M = L[0]; pos = 0; 
for(int i=1; i<N-J; i++)
 
  if(L[i] > M){
    M = L[i]; pos = i; 
  } 
  aux = L[pos]; L[pos] = L[N-1-J]; L[N-1-J] = aux;
}
for(int i=0; i<N; i++)  printf("%d ",L[i]); printf("\n\n"); 

  }//fecha o main