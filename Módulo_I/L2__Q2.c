#include <stdio.h>
#define N 4
float L[N] = { 9.2, 8.0, 7.5, 6.0};
float media = 0;


int main(){
for (int i=0; i<N; i++){
 media = L[i] + media; 
}
// MÉDIA:

media = media/N; 
printf("\nMédia: %.2f \n\n", media); 

for (int i=0; i<N; i++){
    if(L[i]< media ){
      printf("Abaixo da média: %.2f\n", L[i]); 
    }
}
}