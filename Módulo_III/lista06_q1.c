#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
# define N 10

int main(void){
//VARIAVEIS
int L[N] =   { 19, 27, 12, 31, 5, 28, 53, 39, 42, 70};
//            0  1  2  3  4  5  6  7  8   9
int pos = 31, X = 1, troca; 

//LOCALIZAR A POSIÇÃO DO X
int i = 0;
while(i<N && L[i]<pos)i++;{
  if(L[i] == pos){
    L[i]=X;
  }
}

//REALIZAR A ORDENAÇÃO DOS ELEMENTOS
for(int a=0; a<N; a++){
  for(int b=a; b<N; b++){
    if(L[a]>L[b]){
          troca = L[a];
          L[a] = L[b];
          L[b] = troca;
    }
  }
}//fecha for

for(int i = 0; i<N; i++) printf("%d ", L[i]);


}