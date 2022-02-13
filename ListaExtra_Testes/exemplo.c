#include <stdlib.h>
#include <stdio.h>

int M[3][3] = { { 1, 2, 3 },
                { 4, 5, 6 },
                { 8, 8, 9 }};

int A[2][2];


void  imprime_matriz3 ()
 {
   int  i,j;

   printf("\n");
   for ( i=0; i<3; i++ )
    {
     for ( j=0; j<3; j++ )  printf ("%3d",M[i][j]);
     printf("\n");
    }
   printf("\n");

 }

void  imprime_matriz2 ()
 {
   int  i,j;

   printf("\n");
   for ( i=0; i<2; i++ )
    {
     for ( j=0; j<2; j++ )  printf ("%3d",A[i][j]);
     printf("\n");
    }
   printf("\n");
 }


int det2()
 {
    return ( A[0][0] * A[1][1]  -  A[1][0] * A[0][1] );
 }


void copia32 (int l, int c)
 {
   int  i,j, k,z;

   k = 0; 
   for ( i=0; i<3; i++ )  // percorre linhas
    {
     z = 0;
     for ( j=0; j<3; j++ )  // percorre colunas
      {
         if ( i!=l  &&  j != c ) {  A[k][z] = M[i][j]; 
                                    // printf("A[%d][%d] = %3d\n", k,z,A[k][z]);
                                    z++;  }
      }
     if (i != l) k++;
    }
 }


int det3()
 {

   int  d1, d2, d3;

   copia32 (0,0);
   d1 = det2();
   imprime_matriz2();
   printf("determinante: %4d\n",d1);

   copia32 (0,1);
   d2 = det2();
   imprime_matriz2();
   printf("determinante: %4d\n",d2);

   copia32 (0,2);
   d3 = det2();
   imprime_matriz2();
   printf("determinante: %4d\n",d3);

   return( M[0][0] * d1  -  M[0][1] * d2  + M[0][2] * d3 );
 }

int main()
 {
    int det;

    det = det3();

    printf("\n");
    printf("o determinante de M é igual a: %4d\n\n", det);
 }
