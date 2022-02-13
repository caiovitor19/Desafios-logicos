#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
# define N 20

int main(void){
//VARIAVEIS
int L[N] =  { 5, 12, 19, 27, 28, 31, 39, 42, 53, 70}, M = 10, J, X = 42, i;
//            0  1   2   3   4   5   6   7   8   9

//EXIBIR LISTA 01 
for( i=0; i<M; i++) printf("%d ", L[i]); printf("\n\n");


//IDENTIFICAR A POSIÇÃO DO X
i = 0;
while(i<M && L[i]<X) i++;

//COLOCANDO OS ELEMETOS PARA ESQQUERDA
if(J<M && L[i] == X){ //ESSE IF verifica se o x foi encontrado na lista, se tiver sido, ele remove. 
    J = i+1;
    while(J<=M) {
    L[J-1] = L[J]; J++;// EXPLICANDO COM OS VALORES DAS POSIÇÕES: J = 8(J=i+1), enquanto o J estiver menor que M = 10 o J = 7( L[J-1] ) vai ser trocado pelo L[J] sempre aumentando o valor do J, até chegar no M = 10; 
}
M--;
}
//EXIBIR LISTA 02 
for( i=0; i<M; i++) printf("%d ", L[i]); printf("\n\n");
}