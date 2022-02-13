#include <stdlib.h>
#include <stdio.h>
/*

Como o programa recursivo precisa de uma condição de parada (caso base).  A condição que irá verificar a parada é quando o expoente for zero(dado pelo usuario) ou quando chegar a zero(por meio da decremetação do expoente)

*/
int potencia(int x, int n){
  
  if(n == 0){ //condição de parada(caso base)
    return 1; 
  } else if( n == 1){ // outra possivel situação, que nos permite calcular diretamente. 
    return x; 
  } else{ // caso geral ------ A função recursiva irá repetir n vezes --- o X irá sempre ser o mesmo, mas o n será decrementado 
    return x * potencia(x, n-1); 
  }

}

int main() {
  int x, n; 
  // RECEBENDO OS VALORES DO USUARIO(BASE E EXPOENTE)
  printf("\nValor da base: ");      scanf("%d", &x); 
  printf("Valor do expoente: ");    scanf("%d", &n); 
  
  printf("\nResultado da potência: %d ", potencia(x ,n));

}