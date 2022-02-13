
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
# define N 20

int main(void){
//VARIAVEIS
int L[N] =  { 5, 12, 19, 27, 28, 31, 39, 42, 53, 70}, M = 10, J, X = 53, i;
//            0  1   2   3   4   5   6   7   8   9

//EXIBIR LISTA 01 
for( i=0; i<M; i++) printf("%d ", L[i]); printf("\n\n");

i = 0;
while(i<M && L[i]!=X) i++;

  if(i<M){
  L[i] = L[M-1];
  M--;}
for( i=0; i<M; i++) printf("%d ", L[i]); printf("\n\n");
}
