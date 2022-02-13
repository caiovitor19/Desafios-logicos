#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

  system("clear"); 

  enum especie {gato, cobra, coelho};
  enum sexo    {macho, femea};

struct animal {
  char         nome[50], responsavel[50];
  enum especie tipo; 
  int          idade;
  float        peso; 
};

struct animal X; 

// INSERÇÃO DE DADOS PELO USUARIO
printf("INSIRA AS INFORMAÇÕES\n\n"); 

printf("Nome: "); fgets(X.nome, 50, stdin); 

printf("Responsável: "); fgets(X.responsavel, 50,stdin);

printf("Especie: (1) gato  (2) cobra (3) coelho (4) peixe\n"); 
printf("Escolha uma opção: "); scanf("%d", &X.tipo);


printf("Idade: ");             scanf("%d", &X.idade);

printf("Peso: ");              scanf("%f", &X.peso);

//RELATORIO A PARTIR DOS DADOS INFORMADOS
printf("\n\nRELATORIO\n");
printf("Nome: %s", X.nome); 

printf("responsável: %s", X.responsavel); 

printf("Especie: "); 
if(X.tipo == 1 ){
  printf("gato \n"); 
}else if(X.tipo == 2 ){
  printf("cobra \n");
}else if(X.tipo == 3 ){
  printf("coelho \n");
} 

printf("Idade: %d\n", X.idade); 

printf("Peso: %5.2f", X.peso);

}