#include <stdlib.h>
#include <stdio.h>
#define N 6

int L1[N] = { 2, 5, 11, 19, 22, 25 }; 
int L2[N] = { 5, 7, 11, 15, 25, 31 };

/*



*/
int main(){
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      if(L1[i] == L2[j]) printf("%d ", L1[i]);
    }
  }
}


