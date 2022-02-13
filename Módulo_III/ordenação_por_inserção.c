#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
# define N 10

int main(void){

//VARIAVEIS

int L[N] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
//          0   1  2  3  4  5  6  7  8  9
int pos, M, aux;
for(int i=0; i<N; i++)  printf("%d ",L[i]); printf("\n\n"); 

    for(int i=1; i<N; i++){
        int J = i;
        while(J>0 && L[J] < L[J-1]){
        aux = L[J]; L[J] = L[J-1]; L[J-1] = aux;
        J--;
    }//fecha if
}//fecha for
for(int i=0; i<N; i++)  printf("%d ",L[i]); printf("\n\n"); 
  }//fecha o main