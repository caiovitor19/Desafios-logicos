#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

struct racional {
  int num;
  int den; 
};

struct racional R1; 
struct racional R2;

void inserir_valores(){

  printf("Insira o valor do numerador R1: ");   scanf("%d", &R1.num);
  printf("Insira o valor do denominador R1: "); scanf("%d", &R1.den);

  printf("Insira o valor do numerador R2: ");   scanf("%d", &R2.num);
  printf("Insira o valor do denominador R2: "); scanf("%d", &R2.den);

  int resultN = R1.num* R2.num;
  int resultD = R1.den* R2.den;
  printf("%d / %d", resultN, resultD); 
}



int main(){
  inserir_valores(); 
}