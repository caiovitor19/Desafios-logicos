#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
# define N 10

int main(void){
//VARIAVEIS
int L[N] =   {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//            0  1  2  3  4  5  6  7  8   9
int X[N]; 
int aux;
int a=0;
for(int a=0; a<N; a++) X[a] = L[a];

for(int a=0; a<N; a++){
  for(int b=a; b<N; b++){
      if(L[a]+L[a]==L[b]){
        printf("%i ", L[a]);
      }
  }
}

}//fecha o main