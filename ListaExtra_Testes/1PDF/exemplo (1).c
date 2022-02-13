#include <stdlib.h>
#include <stdio.h>

#define  N  7

int L[N];

void func (int k)
 {
    int i,j;

    if ( k < 0 ) { for (j=N-1; j>=0; j--)
                       printf("%2d", L[j]);
                    printf("\n");
                    return;
                  }

    for (i=0;i<=1;i++)
     {
       L[k] = i;
       func(k-1);
     }
 }

int main()
 {
    func(N-1);

//  for (l=0;l<=1;l++)
//    for (i=0;i<=1;i++)
//      for (j=0;j<=1;j++)
//         for (k=0;k<=1;k++)
//
//            printf("%d %d %d %d\n", l,i,j,k);

 }
