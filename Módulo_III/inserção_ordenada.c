#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
# define N 20

int main(void){
//VARIAVEIS
int L[N] =  { 5, 12, 19, 27, 28, 31, 39, 42, 53, 70}, M = 10, J, X = 20, i;
//            0  1   2   3   4   5   6   7   8   9
//EXIBIR LISTA 01 
for( i=0; i<M; i++) printf("%d ", L[i]); printf("\n\n");

// IDENTIFICAR A POSIÇÃO DO X
i = 0;
while(i<M && L[i]<X) i++; // Quando chega no valor 19, o i passa valer 3, considerando x = 20;

// DESLOCAR ELEMENTOS MAIORES QUE O X
J = M; 
while(J>=i) {
  L[J+1] = L[J]; J--;  // começa de frente pra tras (j--), pois ele pega o M = 11(considerando L[J+1]) e coloca o valor de M=10(no caso o J) enquanto esse valor é maior ou nõa chega na poosição i; 
}
//INSIRO O X
L[i] = X;
M++; // aumenta a lista e coloca o X

for(i=0; i<M; i++) printf("%d ", L[i]); printf("\n\n"); // exibi a lista; 

}
