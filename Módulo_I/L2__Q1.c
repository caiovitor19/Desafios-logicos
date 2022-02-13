#include <stdio.h>
#define N 10
int L[N] = {5, 8, 10, 7, 4, 9, 12, 15, 13, 11};
 

int main(void) {
int  maior = L[0]; 
int seg_maior = L[0];

  for (int i = 1; i<N; i++){
      if(maior < L[i]){
         maior = L[i]; 
      } 
  }

  for(int j = 1; j<N; j++){
    if(seg_maior < L[j] && L[j] != maior){
        seg_maior = L[j]; 
      }
  }

   printf("O maior é o %d \n\n", maior);
   printf("O segundo maior é o %d ", seg_maior);
} //main